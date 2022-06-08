# NSP_Template-for-VS-Code

<!-- TOC -->

- [NSP_Template-for-VS-Code](#nsp_template-for-vs-code)
  - [1. Prerequisite](#1-prerequisite)
  - [2. How to clone the Repository in the VSCode](#2-how-to-clone-the-repository-in-the-vscode)
  - [3. How to build the project](#3-how-to-build-the-project)
  - [4. How to burn the program (.elf) file onto the board](#4-how-to-burn-the-program-elf-file-onto-the-board)
  - [5. Archive: How to use the terminal to build the project](#5-archive-how-to-use-the-terminal-to-build-the-project)
  - [6. Reference](#6-reference)

<!-- /TOC -->

## 1. Prerequisite

    1. Have gnu arm building tools installed/downloaded.

    2. Have make.exe in the system environment variable PATH

## 2. How to clone the Repository in the VSCode

1. Open VSCode and then Open the command palette with the key combination of *Ctrl + Shift + P*.

2. At the command palette prompt, enter **gitcl**, select the **Git: Clone command**, and press Enter.

![20220121090831](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220121090831.png)\

3. Enter the URL in the Repository URL field.

4. Choose the desired location for Repository.

## 3. How to build the project

1. There are two build tasks in the ./.vscode/tasks.json, one is to build the project, the other is to clean the project first (delete everything in the build) and then build.

2. Go to Terminal -> Configure Default Build Task... -> *Select the preferred on*

![20220121092003](https://raw.githubusercontent.com/holdenzlL/myIHS/main/images/20220121092003.png)

3. After configuration, press *CTRL + SHIFT + B* to build the project

## 4. How to burn the program (.elf) file onto the board

1. Open the file ./vscode/launch.json to adjust the name of the executable files and the relative paths.

2. After adjustment, use F5 or the menu *Run > Start Debugging* to start a debug session

## 5. Archive: How to use the terminal to build the project
 
1. Open the VSCode explorer (ctrl+shift+E), right-click the "build" folder, select "Open in integrated terminal".

2. go to the folder ./build, and open the terminal.

3. configure the project by running the command " cmake -DCMAKE_MAKE_PROGRAM=make.exe -G "Unix Makefiles" .. " at the path ./build

4. build the project by running the command " make " at the path ./build

## 6. Reference

https://mcuoneclipse.com/2021/05/01/visual-studio-code-for-c-c-with-arm-cortex-m-part-1/
