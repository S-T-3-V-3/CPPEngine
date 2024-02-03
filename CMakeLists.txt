cmake_minimum_required(VERSION 3.10)

project(HecateEngine)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the Source directory
include_directories(${CMAKE_SOURCE_DIR}/Source)
include_directories(${CMAKE_SOURCE_DIR}/Source/Engine)

# Add source files
file(GLOB_RECURSE SOURCES 
    "Source/*.cpp"
    "Source/App.cpp"
)
file(GLOB_RECURSE HEADERS
    "Source/*.h"
)

# Set build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Add executable
add_executable(HecateEngine ${SOURCES} ${HEADERS})

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Link OpenGL libraries
target_link_libraries(HecateEngine OpenGL::GL)

# Compiler flags based on build type
if(CMAKE_BUILD_TYPE MATCHES Debug)
  # Debug specific settings
  message("Debug build.")
  add_definitions(-DDEBUG)
else()
  # Release specific settings
  message("Release build.")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")  # Optimization level for Release
endif()

# Copy Shaders to build directory
file(COPY Shaders DESTINATION ${CMAKE_BINARY_DIR})
