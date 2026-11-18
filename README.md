# Submarine

*[Version française](README.fr.md)*

A first-person puzzle game: the submarine is flooding, and the player must patch the leaks and get the generator running again before drowning.
Solo academic project made with **Unreal Engine 5.5** and **C++** (November 2024 – January 2025).

![Starting zone](https://github.com/user-attachments/assets/41b34460-4df7-4940-8f41-673dacf34567)

## How it plays

The water level rises constantly. To survive, the player explores the submarine, finds the tools and solves puzzles that unlock what is needed for the repairs. Once every leak is patched and the generator is fixed, the water drains. If the water reaches the ceiling, the game is lost.

## Features

- **Rising water**: a C++ actor raises the water level every frame, triggers the death screen and drains the water once the repairs are done.
- **Water leaks**: Niagara effects and sound, patched with the hammer and the toolbox.
- **Generator**: three batteries to find and place in their slots.
- **Lever puzzle**: a sequence of levers to pull in the right order, reset on a mistake.
- **Keypad**: a code to enter to open a locker.
- **Inspection mode**: the player picks up an object to rotate and examine it. The game switches Input Mapping Contexts (Enhanced Input) so the mouse rotates the object instead of the camera.
- **Picking up and dropping** objects with physics.
- **Story**: text loaded from a Data Table (`FStoryData`) and shown in a widget.
- **UI** in C++: HUD with action prompts, main menu, pause menu and death screen.

## Architecture

| Class | Role |
| --- | --- |
| `ASubmarineCharacter` | Movement, object detection by line trace, inspection mode, interaction |
| `IInteractE` | Interface shared by every interactive object (`Interact()`) |
| `AWaterMecanic` | Water level, lose condition, draining |
| `AWaterLeak` | Water leak (Niagara + sound) |
| `AGenerator` / `ABattery` | Generator with three battery slots |
| `ALever` / `ALeverCondition` | Lever sequence puzzle |
| `ANumPad` / `ALocker` | Keypad and locker |
| `AHammer` / `AToolbox` | Tools the player can pick up |
| `U*Widget` | HUD, menus, death screen, story |

## Controls

| Key | Action |
| --- | --- |
| W A S D + mouse | Move and look |
| E | Interact |
| G | Drop the held object |

## Running the project

1. Install **Unreal Engine 5.5** and Visual Studio or Rider with the C++ tools.
2. Right-click `Submarine/Submarine.uproject` > *Generate Visual Studio project files*.
3. Open the `.uproject` and build when the editor asks.
