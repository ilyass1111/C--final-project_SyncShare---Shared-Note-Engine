# SyncShare: Shared Note Engine

![Language](https://img.shields.io/badge/Language-C++-blue.svg)
![Build](https://img.shields.io/badge/Framework-FLTK-green.svg)

A robust, C++-based shared note synchronization system featuring a bidirectional GUI, a command-line management controller, and professional memory management.

## Project Overview
SyncShare allows multiple instances of the application to interact with a shared `notes.txt` database. Designed with a modular architecture, the system utilizes **Inheritance**, **Smart Pointers**, and **Operator Overloading** to ensure memory safety, type extensibility, and maintainable code.

## Key Technical Features
* **Memory Safety:** Implements `std::unique_ptr` for professional resource management.
* **OOP Architecture:** Features class inheritance (`BaseNote`, `SecureNote`) and template-based logging.
* **Operator Overloading:** Streamlined object output using the overloaded `<<` operator for easy data debugging.
* **Bidirectional Sync:** Real-time GUI updates using automated file polling.
* **CLI Controller:** Powerful maintenance commands (Import/Export/Delete/Stats) designed to adhere to a "no-runtime-input" policy.

## Commands
| Command | Description |
| :--- | :--- |
| `./main start` | Launches the graphical user interface. |
| `./main stats` | Displays the total number of notes currently stored. |
| `./main import <file>` | Performs bulk note import from a specified `.txt` file. |
| `./main export` | Exports all current notes to the console. |
| `./main delete <title>` | Removes a specific note by its title from the database. |

## Technical Stack
* **Language:** C++ (Standard C++11/17)
* **GUI Framework:** FLTK (Fast Light Toolkit)
* **Data Persistence:** Persistent local `.txt` file (Source of Truth)
* **Build System:** `fltk-config`

## Installation & Usage
1. **Compile:**
   ```bash
   fltk-config --compile main.cpp
