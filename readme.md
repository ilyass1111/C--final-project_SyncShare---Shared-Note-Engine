A bidirectional, file-based shared note synchronization system with a GUI, command-line management controller, and real-time data persistence.

## Project Overview
SyncShare allows multiple instances of the application to interact with a shared `notes.txt` database. Built for efficiency and security, it strictly adheres to a "no-runtime-input" policy, utilizing a robust CLI controller to manage data.

## Features
* **Bidirectional Sync:** Real-time note updates using automated file polling.
* **CLI Controller:** Manage your database without opening the GUI.
* **Inheritance-based Architecture:** Implements `BaseNote` and `SecureNote` classes.
* **Extra Features:** Includes template functions for logging, smart memory management, and advanced command-line parsing.

## Commands
| Command | Description |
| :--- | :--- |
| `./main start` | Launches the graphical user interface. |
| `./main stats` | Displays the total number of notes. |
| `./main import <file>` | Performs bulk note import from a `.txt` file. |
| `./main export` | Exports all notes to the console. |
| `./main delete <title>` | Removes a note by its title. |

## Technical Stack
* **Language:** C++
* **GUI Framework:** FLTK
* **Data Storage:** Local `.txt` file (source of truth)
* **Build System:** `fltk-config`

## Installation & Usage
1.  **Compile:**
    ```bash
    fltk-config --compile main.cpp
    ```
2.  **Run:**
    Ensure `notes.txt` exists in the folder, then use the commands listed above.

## Documentation
For full project details and design specifications, please refer to the `Project_Planning_v2.pdf`.
"""
# SyncShare

![Language](https://img.shields.io/badge/Language-C++-blue.svg)
![Build](https://img.shields.io/badge/Framework-FLTK-green.svg)


