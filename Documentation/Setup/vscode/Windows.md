# HecateEngine Setup Guide for Windows

This guide provides step-by-step instructions for setting up the HecateEngine project on Windows.

## Table of Contents

1. [Install Visual Studio Code](#install-visual-studio-code)
2. [Install CMake](#install-cmake)
3. [Configure Visual Studio Code](#configure-visual-studio-code)
   - [Launch Configuration](#launch-configuration)
   - [Settings](#settings)
   - [Tasks](#tasks)

---

## Install Visual Studio Code

[Visual Studio Code](https://code.visualstudio.com/) is a lightweight, cross-platform code editor with built-in support for C++ development.

1. Download and install Visual Studio Code from the official website.
2. Open Visual Studio Code and install the C++ extension for enhanced C++ development support.

---

## Install CMake

[CMake](https://cmake.org/) is a cross-platform tool designed for building, testing, and packaging software.

1. Download the CMake installer for Windows from the official website.
2. Run the installer and follow the on-screen instructions to complete the installation.
3. Ensure that CMake is added to the system PATH during installation.

---

## Configure Visual Studio Code

### Launch Configuration

Copy and paste the following configurations into your `.vscode/launch.json` file to set up debug and release configurations for the HecateEngine project:

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "Debug HecateEngine",
      "type": "cppvsdbg",
      "request": "launch",
      "program": "${workspaceFolder}/build/HecateEngine.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "preLaunchTask": "Build HecateEngine Debug"
    },
    {
      "name": "Release HecateEngine",
      "type": "cppvsdbg",
      "request": "launch",
      "program": "${workspaceFolder}/build/HecateEngine.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "preLaunchTask": "Build HecateEngine Release"
    }
  ]
}
```

### Settings

Add any specific settings or configurations for your HecateEngine project in your `.vscode/settings.json` file.

```json
{
    // C++ configuration
    "editor.defaultFormatter": "ms-vscode.cpptools",
    "editor.formatOnSave": true,

    // C++ Formatting
    "C_Cpp.clang_format_sortIncludes": false,
    "C_Cpp.vcFormat.space.pointerReferenceAlignment": "left",
    "C_Cpp.vcFormat.newLine.beforeOpenBrace.block": "newLine",
    "C_Cpp.vcFormat.newLine.beforeOpenBrace.function": "newLine",
    "C_Cpp.vcFormat.newLine.beforeOpenBrace.namespace": "newLine",
    "C_Cpp.vcFormat.newLine.beforeOpenBrace.type": "newLine",
    "C_Cpp.formatting": "vcFormat",
    
    // File and folder settings
    "files.exclude": {
        "**/.git": true,
        "**/.svn": true,
        "**/.DS_Store": true,
        "build/": true,
        "bin/": true,
        "obj/": true
    },

    // Editor settings
    "editor.tabSize": 4,
    "editor.insertSpaces": true,
    "editor.detectIndentation": false,

    // IntelliSense settings
    "C_Cpp.intelliSenseEngine": "default",

    // Git settings
    "git.ignoreLimitWarning": true,
}
```

### Tasks

Copy and paste the tasks configuration below into your `.vscode/tasks.json` file to define the build tasks for your HecateEngine project:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build HecateEngine Debug",
      "type": "shell",
      "command": "cmake --build ./build --config Debug",
      "group": "build",
      "problemMatcher": "$msCompile"
    },
    {
      "label": "Build HecateEngine Release",
      "type": "shell",
      "command": "cmake --build ./build --config Release",
      "group": "build",
      "problemMatcher": "$msCompile"
    }
  ]
}
```