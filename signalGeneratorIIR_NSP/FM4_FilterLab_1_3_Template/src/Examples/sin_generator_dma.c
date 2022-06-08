/* generator_intr.c
 * Simply receives and transmits audio samples. Can be used to check if the I2S interface is working as intended.
 * Audio data are processed in ISR
 *
 * Recommended slider app parameter settings
 * Index	Name		Minimum		Initial		Maximum		Step Size		Digits
 * 0
 * 1
 * 2
 * 3
 * 4		Line in		0			23			31			1				1.0
 * 5		HP Out		48			48			127			1				1.0
 *
 *
 * Change History:
 * ter; Jan 3, 2019:	Volume control for CODEC head phone out added, volume control in IS removed
 * ter; Jan 5, 2019:	Volume control for CODEC line in added, support of LRxxBOTH bit added.
 * 						Audio samples are now stored and accessed by means of a union (audio) (520 ns vs 870 ns processing time)
 * ter; Jan 31, 2019:	'init_LED' replaced by 'init_gpio',
 * 						gpio settings replaced by PDL 2.1.0 macros
 * 						Sampling frequency can now be set by means of variable 'SFREQUENCY'
 * 						GPIO and CODEC commands modified to support latest PDL drivers
 * ter; Feb 08, 2019: 	init_slider_interface() moved from main() to platform_init()
 * 						CODEC Line in and HP gain update moved to function setLIandHPlevels()
 *
 */


#include <pdl_header.h>
#include <platform.h>
#include <utils.h>
#include <arm_math.h>

// user definitions
#define SAMPLERATE 8000	// CODEC sampling frequency in Hz, 8000, 32000, 48000 or 96000

#define PI_NUMBER 3.1415926535

// user global variables
	float32_t buffer_1 = {0.0};// (Modulo) buffer of N values, all initialized by 0.0 to avoid 0.5 s noise at output
	float32_t buffer_2 = {0.0};
	float32_t x_n = {1.0};
	float32_t sum_delays = {0.0};
	float32_t y_n, gained_input, gained_delay_1, gained_delay_2, delayed_1, delayed_2;

	float32_t amplitude_signal;
	float32_t frequency_output;
	float32_t omega_0;
	float32_t gain_1;
	float32_t gain_2;
	float32_t gain_3 = -1.0;

// prototypes
void process_buffer(void);

int main(void)
{
	// Initialize platform resources: I2S, I2C and UART interfaces, CODEC, GPIO for LED, user button and test pin
	//platform_init(BAUDRATE, SAMPLERATE, line_in, intr, I2S_HANDLER, NULL); // second pointer to interrupt handler only for DSTC needed
	platform_init(BAUDRATE, SAMPLERATE, line_in, dma, DSTC_I2S_HANDLER_CH0, DSTC_I2S_HANDLER_CH1);
	
	while(1)
	{
		while (!(rx_buffer_full && tx_buffer_empty))
			{
				// optional: Update slider parameters, needed in case the slider GUI is used

				update_slider_parameters(&FM4_GUI);

				// optional: update line in and head phone level through slider app
				// uses slider 4 and 5
				setLIandHPlevels(&FM4_GUI);

				// toggle activity indicator
				gpio_set(LED_B, HIGH);		// LED_B off
			}

			process_buffer();	// Algorithm
	}
}

void process_buffer(void)
{
	int i;
	uint32_t *txbuf, *rxbuf;
	int16_t leftChannel, rightChannel;
	union audio audioIO;

	// set txbuf and rxbuf pointer to the active DMA buffer
	// do not modify
	if(tx_proc_buffer == PING) txbuf = dma_tx_buffer_ping;
	else txbuf = dma_tx_buffer_pong;

	if(rx_proc_buffer == PING) rxbuf = dma_rx_buffer_ping;
	else rxbuf = dma_rx_buffer_pong;

	// enter your data processing algorithms here

	amplitude_signal= 10.0; // Change later with GUI
	frequency_output = 500; // Change later with GUI (adjustable) should be Hz
	omega_0 = 2.0* PI_NUMBER * frequency_output / SAMPLERATE;
	gain_1 = amplitude_signal * (float32_t)arm_sin_f32(omega_0);
	gain_2 = 2.0 * (float32_t)arm_cos_f32(omega_0);
	gain_3 = -1.0;

	for(i=0; i < DMA_BUFFER_SIZE ; i++)
	{

		//Process data
		gained_input = gain_1 * x_n;
		y_n = gained_input + sum_delays;

		delayed_1 = buffer_1;	//take out the old value
		buffer_1 = y_n;		//refresh

		delayed_2 = buffer_2;	//take out the old value
		buffer_2 = delayed_1;	//refresh

		gained_delay_1 = gain_2 * delayed_1;
		gained_delay_2 = gain_3 * delayed_2;
		sum_delays = gained_delay_1 + gained_delay_2;

		x_n = 0;
		audioIO.audio_ch[LEFT] = audioIO.audio_ch[RIGHT] = (int16_t)y_n*10000;

		//END of Process data


		*txbuf++ = audioIO.audioSample;
	}


	// Flags for DMA handling, do not modify
	tx_buffer_empty = 0;
	rx_buffer_full = 0;

//	gpio_set(TEST_PIN, LOW);		// toggle TestPin P10 for computing time measurement
}
