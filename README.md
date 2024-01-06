# OpenGL and C++ Project

## Overview

This project aims to create a low-level OpenGL application using C++. The primary goal is to re-familiarize myself with C++ programming and OpenGL rendering techniques. The project will also include setting up baseline tests for performance metrics, and implementing optimizations over time.

I want to be able to cover all of the listed tutorials at [cplusplus.com](https://cplusplus.com/doc/tutorial/), implementing them in a meaningful and useful way during this project.

The engine will use prefixed naming conventions for all classes, functions, variables, etc. to avoid any potential naming conflicts with the standard library
These can be found in the [naming conventions](/Documentation/Overview/NamingConventions.md) document.

## Roadmap

The roadmap for this project can be found [here](/Documentation/Overview/Roadmap.md).

## Features

- OpenGL Rendering
- 2D and 3D Collision Handling
- GLSL Shaders, Shadows and Lighting
- Baseline Performance Metrics
- Optimization Tracking

For a more detailed list of features, see the [roadmap](/Documentation/Overview/Roadmap.md).

## Project Structure

```
CPPEngine/
|-- Documentation/
|   |-- Build/
|   |-- Engine/
|   |-- Game/
|   |-- Overview/
|   |-- Setup/
|-- Shaders/
|-- Source/
|   |-- Engine/
|   |   |-- Entities/
|   |   |-- Framework/
|   |   |-- Globals/
|   |   |-- Xtensions/
|   |-- Game/
|   |-- ThirdParty/
|-- CMakeLists.txt
|-- README.md
|-- .gitignore
```

## Setup Instructions

1. Clone the repository:
   ```
   git clone https://github.com/S-T-3-V-3/CPPEngine.git
   ```

2. Navigate to the project directory:
   ```
   cd CPPEngine
   ```

3. Build the project using CMake:
   ```
   cmake -S . -B build
   cd build
   cmake --build . --config Release
   ```

4. Run the executable:
   ```
   cd Release
   ./CPPEngine
   ```
   
## Baseline Test

Baseline performance metrics will be logged in the `baseline_log.txt` file. This will serve as a reference point for future optimizations.

## Optimizations

Optimizations will be tracked and documented in [Overview/Optimizations.md](/Documentation/Overview/Optimizations.md) and through meaningful commit messages. Major milestones will be tagged in unique branches for easy reference.

## Contributing

Feel free to fork the repository and submit pull requests for improvements or optimizations.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
