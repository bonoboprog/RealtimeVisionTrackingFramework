# Realtime Vsion Tracking Framework

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![C++20](https://img.shields.io/badge/C%2B%2B-20-blue.svg)](https://isocpp.org/)
[![OpenCV](https://img.shields.io/badge/OpenCV-4.x-green.svg)](https://opencv.org/)
[![CMake](https://img.shields.io/badge/CMake-3.15+-brightgreen.svg)](https://cmake.org/)

A modular realtime computer vision framework written in modern C++ using OpenCV and CMake.

The purpose of this project is not to build a single computer vision application, but to design a **reusable andd extensible framework** capable of handling realtime data streams.

> The framework is intended to progressively evolve into a complete environement for:
> - realtime video acquisition
> - image processing
> - object tracking
> - motion analysis
> - AI experimentation
> - embedded-oriented computer vision systems

Instead of focusing on isolated demos or prebuilt detectors, the project amis to model how real vision systems are architected internally. This is a way for me to revise subjects explained during programming, image analysis and AI courses in university, preparing for a professional way of working on this kind of projects.

---

## Framework Vision

The framework is designed around the idea of a **realtime visual pipeline**.

A camera continuosly produces frames that travel through a sequence of independent processing modules. Each module performs a specific operation on the visual data before passing it to the next stage.

Conceptually, the framework is intended to evolve toward a structure similiar to:

```text
camera
- preprocessing
- filtering
- feature extraction
- detection
- tracking
-rendering/debug
```

### Implementation guidelines

Every stage should remain as independent as possible from the others:

- The tracking system should not depend directly on the camera implementation.
- Rendering should not know how object detection works internally.
- Processing modules ashould be replacable without redesigning the entire system.

The framework is therefore intended to become a **platform for experimentation**. Different algorithms, tracking approaches, filters, or AI models should be insertable into the pipeline while preserving the overall architecture.

Over time, the project will progressively move from high-level OpenCV abstractions toward custom implementation of:

- image filtering
- feature extraction
- motion analysis
- object tracking
- realtime processing systems

The long-term objective is to understand not only **how to use** computer vision libraries but **how modern vision systems are actually designed**.

--- 

## Technologies

| Category | Tools |
| --- | ---|
| Language | C++20 |
| Core Librar | OpenCV|
| GUI | Qt6 |
| Build System | CMake 3.15+ |
| Environment | MSYS2 + MinGW UCRT64 |

---

## Project Structure

```text
src/        # Source files
include/    # Header files
assets/     # Images, XML files, videos
models/     # AI and tracking models
docs/       # Documentation and notes
build/      # CMake build directory
```

## Build Instructions

### Requirements

Make sure you have the following installed:

- GCC / G++ (or Clang)
- CMake (3.15)
- OpenCV (4.x)
- Qt6 

### MSYS2 

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
pacman -S mingw-w64-ucrt-x86_64-cmake
pacman -S mingw-w64-ucrt-x86_64-opencv
pacman -S mingw-w64-ucrt-x86_64-qt6-base
```

### Configure

From the project root:

```bash
cmake -B build
```

### Build 

```bash
cmake --build build
```

### Run

```bash
./build/app.exe
```

---

## Current Development State

> **Early development** - initial focus on:
> - build system setup
> - realtime webcam acquisition
> - rendering pipelines
> - OpenCV integration
> - modular project architecture
> - early tracking experiments

Future development will progressively introduce more advanced processing and tracking systems.

---

## Learning goals

This is intended as a long-term practical study project focused on:

- modern C++ (C++20),
- object-oriented and modular software architecture,
- realtime systems design,
- computer vision fundamentals,
- image processing algorithms,
- multi‑object tracking,
- AI inference pipelines (ONNX, TensorFlow Lite),
- embedded‑oriented development (ARM, Raspberry Pi).

---

## License

[MIT](LICENSE)

---