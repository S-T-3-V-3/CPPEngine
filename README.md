# OpenGL and C++ Project

## Overview

This project aims to create a low-level OpenGL application using C++. The primary goal is to re-familiarize myself with C++ programming and OpenGL rendering techniques. The project will also include setting up baseline tests for performance metrics, and implementing optimizations over time.

I want to be able to cover all of the listed tutorials at [cplusplus.com](https://cplusplus.com/doc/tutorial/), implementing them in a meaningful and useful way during this project.

## Features

- OpenGL Rendering
- 2D and 3D Collision Handling
- GLSL Shaders, Shadows and Lighting
- Baseline Performance Metrics
- Optimization Tracking

## Project Structure

```
MyOpenGLProject/
|-- src/
|   |-- main.cpp
|   |-- shaders/
|   |-- ...
|-- include/
|   |-- ...
|-- assets/
|   |-- ...
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
   cd MyOpenGLProject
   ```

3. Build the project using CMake:
   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

4. Run the executable:
   ```
   ./MyOpenGLProject
   ```
   
## Baseline Test

Baseline performance metrics will be logged in the `baseline_log.txt` file. This will serve as a reference point for future optimizations.

## Optimizations

Optimizations will be tracked and documented in the README and through meaningful commit messages. Major milestones will be tagged for easy reference.

## Contributing

Feel free to fork the repository and submit pull requests for improvements or optimizations.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
