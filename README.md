# Project README

## Overview
This project is a simple command-line tool designed to manage and crawl source code files. It uses a configuration file in YAML format to define the directories and files to be processed.

## Features
- **Package Management**: Loads and manages packages from specified directories.
- **Source Code Crawling**: Crawls through source files (.c, .h) within specified directories.
- **Configuration**: Uses a YAML file for configuration settings.

## Project Structure

### Prerequisites
- C/C++ Compiler (GCC)
- Make utility
- Standard development tools
- Libraries needed for YAML parsing (libyaml)

## Build & Run

### Linux Build and Execution
1. Navigate to the project directory.
2. To build the project:
   ```bash
   make -f Makefile.linux all
   ```
3. To clean the build artifacts:
   ```bash
   make -f Makefile.linux clean
   ```
4. To execute the built binary:
   ```bash
   ./bin/PackageManager
   ```

### Windows Build and Execution
1. Navigate to the project directory.
2. To build the project:
   ```cmd
   make -f Makefile.windows all
   ```
3. To clean the build artifacts:
   ```cmd
   make -f Makefile.windows clean
   ```
4. To execute the built binary (assuming it is named `PackageManager.exe`):
   ```cmd
   bin\PackageManager.exe
   ```

### Wine Build and Execution (Linux Cross Compile for Windows)
1. Navigate to the project directory.
2. To build the project:
   ```bash
   make -f Makefile.wine all
   ```
3. To clean the build artifacts:
   ```bash
   make -f Makefile.wine clean
   ```
4. To execute the built binary (assuming it is named `PackageManager.exe`):
   ```cmd
   bin\PackageManager.exe
   ```

### WebAssembly Build and Execution (Emscripten)
1. Navigate to the project directory.
2. To build the project:
   ```bash
   make -f Makefile.web all
   ```
3. To clean the build artifacts:
   ```bash
   make -f Makefile.web clean
   ```
4. To execute the built WebAssembly module (assuming it is named `PackageManager.js`):
   ```html
   <script src="bin/PackageManager.js"></script>
   ```

# Project Organization
```
<Project>/
├── build/              # .exe files produced by Main.c
├── bin/                # .so / .dll produced by *.c in libs
├── libs/               # *.c for bin
├── lib/                # librarys for my own languages
├── code/               # scripts from my custom languages for example .rex, .ll, .omml
├── data/               # Datafile for example .txt or dumped files
├── assets/             # images and sound files
├── src/                # src code
│   ├── Main.c          # Entry point
│   └── *.h             # stand alone Header-based C-files, without *.c files that implement it
├── Makefile.linux      # Linux Build configuration
├── Makefile.windows    # Windows Build configuration
├── Makefile.wine       # Wine Build configuration
├── Makefile.web        # Emscripten Build configuration
└── README.md           # This file
└── LICENCE
└── .gitignore
```

The project includes specific makefiles for different operating systems to facilitate building and cleaning the project. The `src` directory contains only `Main.c` and other header files, without any `.c` files that implement them.