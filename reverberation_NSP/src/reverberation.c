/* loop_intr_echo.c
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

#include "FM4_slider_interface.h"

// user definitions
#define SAMPLERATE 48000	// CODEC sampling frequency in Hz, 8000, 32000, 48000 or 96000
#define N 32001				// modulo delay of 24000 samples for 0.5 s delay at 48000 Hz sample frequency

// user global variables
float32_t buffer[N] = {0.0};	// (Modulo) buffer of N values, all initialized by 0.0 to avoid 0.5 s noise at output
int16_t bufferInd = 0;				// int16_t range -32.768 ... 32.767, sorry, variable name "index" already used elsewhere
extern struct FM4_slider_struct FM4_GUI; // For GUI

// prototypes
void I2S_HANDLER(void);

void I2S_HANDLER(void) {   /****** I2S Interruption Handler *****/
	union audio audioIO;

	float32_t x_n, y_n, delayedOutput, delayedGainedOutput;
	float32_t gainFactor = 0.7;

	//gpio_toggle(TEST_PIN);
	gpio_set(TEST_PIN, HIGH);		// TestPin P10, 110 ns

	audioIO.audioSample = I2s_ReadRxFifo(&I2S0); // get one sample (left and right channel, 16 bit each), 175 ns

//	Process (nothing to do, just a loop)

// Calculate average of left and right sample - cast it to float32_t
	x_n = (float32_t)(audioIO.audio_ch[LEFT]/2 + audioIO.audio_ch[RIGHT]/2);

    delayedOutput = buffer[bufferInd];							// 2.) read oldest value out of delay modulo buffer
    delayedGainedOutput = delayedOutput*FM4_GUI.P_vals[0];				// 3.) calculate delayed levelled value
	y_n = delayedGainedOutput + x_n;			// 4.) calculate sum of delayed and non-delayed levelled values
    buffer[bufferInd] = y_n;								// 5.) overwrite eldest output value by newest output value

    bufferInd = (++bufferInd)%(int16_t)FM4_GUI.P_vals[1];								// does the same as 6.) and 7.)

	audioIO.audio_ch[LEFT] = audioIO.audio_ch[LEFT] = (int16_t)y_n;	// write back audio signal to left and right channels

	I2s_WriteTxFifo(&I2S0, audioIO.audioSample); // send one sample, 175 ns

	gpio_set(TEST_PIN, LOW);		// TestPin P10, 110 ns
	gpio_set(LED_B, LOW);			// LED_B on
}

int main(void) {
	// Initialize platform resources: I2S, I2C and UART interfaces, CODEC, GPIO for LED, user button and test pin
	platform_init(BAUDRATE, SAMPLERATE, line_in, intr, I2S_HANDLER, NULL); // second pointer to interrupt handler only for DSTC needed

	// send a string to the terminal
	// writeUart0("Hello FM4 World!\r\n");

	while(1) {
		// Update slider parameters
		update_slider_parameters(&FM4_GUI);

		// update line in and head phone level through slider app
		setLIandHPlevels(&FM4_GUI);

		// toggle activity indicator
		gpio_set(LED_B, HIGH);		// LED_B off
	}
}
