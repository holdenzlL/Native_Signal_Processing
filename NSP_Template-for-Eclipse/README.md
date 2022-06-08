# Set up the environment for NSP Project

This template is provided by professor for the Native Signal Processing course
<!-- TOC -->

- [Set up the environment for NSP Project](#set-up-the-environment-for-nsp-project)
  - [Set up the basic development environment](#set-up-the-basic-development-environment)
    - [1 Install Segger J-link](#1-install-segger-j-link)
    - [2 Download xPack Windows Build Tools](#2-download-xpack-windows-build-tools)
    - [3 Download xPack GNU Arm Embedded GCC](#3-download-xpack-gnu-arm-embedded-gcc)
    - [4 Download and Install Eclipse](#4-download-and-install-eclipse)
    - [5 Configure Eclipse environment](#5-configure-eclipse-environment)
  - [Set up version control in Eclipse for NSP project with Github](#set-up-version-control-in-eclipse-for-nsp-project-with-github)
    - [1 Install the EGit extension for Eclipse](#1-install-the-egit-extension-for-eclipse)
    - [2 Create a repo and add the public key to Github](#2-create-a-repo-and-add-the-public-key-to-github)
    - [3 Configure the Eclipse and Make the first commit](#3-configure-the-eclipse-and-make-the-first-commit)

<!-- /TOC -->
## Set up the basic development environment

### 1 Install Segger J-link

1. Google “Segger J-link”
![0C__Users_holde_Pictures_wait_to_upload_googlesegger](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/0C__Users_holde_Pictures_wait_to_upload_googlesegger.png)

2. Choose “Download->J-Link / J-Trace"
![1C__Users_holde_Pictures_wait_to_upload_choosedownload](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/1C__Users_holde_Pictures_wait_to_upload_choosedownload.png)

3. Choose the version appropriate to your system to download
![2C__Users_holde_Pictures_wait_to_upload_choosetodhwonload](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/2C__Users_holde_Pictures_wait_to_upload_choosetodhwonload.png)
![3C__Users_holde_Pictures_wait_to_upload_downloadconfirm](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/3C__Users_holde_Pictures_wait_to_upload_downloadconfirm.png)
![4C__Users_holde_Pictures_wait_to_upload_agree](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/4C__Users_holde_Pictures_wait_to_upload_agree.png)

4. Install
![5C__Users_holde_Pictures_wait_to_upload_install](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/5C__Users_holde_Pictures_wait_to_upload_install.png)
![6C__Users_holde_Pictures_wait_to_upload_install2](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/6C__Users_holde_Pictures_wait_to_upload_install2.png)
![7C__Users_holde_Pictures_wait_to_upload_install3](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/7C__Users_holde_Pictures_wait_to_upload_install3.png)
![8C__Users_holde_Pictures_wait_to_upload_popups](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/8C__Users_holde_Pictures_wait_to_upload_popups.png)
![9C__Users_holde_Pictures_wait_to_upload_finish](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/9C__Users_holde_Pictures_wait_to_upload_finish.png)

---

### 2 Download xPack Windows Build Tools

1. Google “xPack Windows Build Tools”, and choose the GitHub one.
![10C__Users_holde_Pictures_wait_to_upload_2_googlexpack](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/10C__Users_holde_Pictures_wait_to_upload_2_googlexpack.png)

2. Click release jumping to the download page
![11C__Users_holde_Pictures_wait_to_upload_2_relase](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/11C__Users_holde_Pictures_wait_to_upload_2_relase.png)

3. Choose the latest version and download the zip file
![12C__Users_holde_Pictures_wait_to_upload_2_choosezip](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/12C__Users_holde_Pictures_wait_to_upload_2_choosezip.png)

4. Extract file and copy the path of the bin folder for further use.

---

### 3 Download xPack GNU Arm Embedded GCC

1. Google “xPack GNU Arm Embedded GCC”, and choose the GitHub one.
![13C__Users_holde_Pictures_wait_to_upload_3_googlexpack](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/13C__Users_holde_Pictures_wait_to_upload_3_googlexpack.png)

2. Click release jumping to the download page
![14C__Users_holde_Pictures_wait_to_upload_3_jumping](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/14C__Users_holde_Pictures_wait_to_upload_3_jumping.png)

3. Choose the latest version and download the zip file
![15C__Users_holde_Pictures_wait_to_upload_3_ZIP](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/15C__Users_holde_Pictures_wait_to_upload_3_ZIP.png)

4. Extract file and copy the paths of the bin folder and the arm-none-eabi\bin folder for later use.

---

### 4 Download and Install Eclipse

In the installer of Eclipse, choose “Eclipse IDE for Embeded C/C++ developers”.
![16C__Users_holde_Pictures_wait_to_upload_4_eclipse](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/16C__Users_holde_Pictures_wait_to_upload_4_eclipse.png)

---

### 5 Configure Eclipse environment

1. Open Eclipse, select Window->Preferences
![17C__Users_holde_Pictures_wait_to_upload_5_eclipseopen](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/17C__Users_holde_Pictures_wait_to_upload_5_eclipseopen.png)

2. Add a new item in the environment.
![18C__Users_holde_Pictures_wait_to_upload_5_envir](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/18C__Users_holde_Pictures_wait_to_upload_5_envir.png)

3. Set up the PATH variable.
![19C__Users_holde_Pictures_wait_to_upload_5_setup](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/19C__Users_holde_Pictures_wait_to_upload_5_setup.png)

4. Apply the change.
![20C__Users_holde_Pictures_wait_to_upload_5_apply](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20C__Users_holde_Pictures_wait_to_upload_5_apply.png)

## Set up version control in Eclipse for NSP project with Github

### 1 Install the EGit extension for Eclipse

1. Open Eclipse, open Help->EclipseMarketplace...

2. Search "Egit", and click install
![20220115092346](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115092346.png)

3. Confirm
![20220115092447](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115092447.png)

4. Accept the aggrement of Eclipse Marketplace and then finish
![20220115092625](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115092625.png)

5. Restart Eclipse

6. Go to Window->Preferences, then search ssh for generating an RSA Key
![20220115093913](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115093913.png)

7. Copy the public key and save the private kay
![20220115094148](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115094148.png)

8. Switch to the "General" tab, add private key you just saved
![20220115094355](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115094355.png)

### 2 Create a repo and add the public key to Github

1. Go to Github, open settings
![20220115094700](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115094700.png)

2. Switch to SSH and GPG keys, then click on "New ssh key"
![20220115094823](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115094823.png)

3. Paste the public key
![20220115095007](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115095007.png)

4. Create a repository on Github
![20220115093309](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115093309.png)

5. Copy the link of SSH
![20220115093507](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115093507.png)

### 3 Configure the Eclipse and Make the first commit

1. Get your project ready on Eclipse
![20220115095424](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115095424.png)

2. Add Git perspective to Eclipse
![20220115095522](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115095522.png)

3. Clone a Git repository
![20220115095552](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115095552.png)

4. Copy paste the link and press next
![20220115095750](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115095750.png)

5. Switch to C/C++ perspective, right click your project, select team->share project...
![20220115100023](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115100023.png)

6. Switch back to the Git perspective, right click the repo and select "commit"
![20220115100237](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115100237.png)
![20220115100314](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220115100314.png)

Then add some comment and click "commit and push".
