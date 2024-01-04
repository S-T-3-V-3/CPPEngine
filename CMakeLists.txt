cmake_minimum_required(VERSION 3.10)

project(CPPEngine)

# Add source files from subdirectories
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")

# Set build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Add executable
add_executable(CPPEngine ${SOURCES} ${HEADERS})

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Link OpenGL libraries
target_link_libraries(CPPEngine OpenGL::GL)

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

# Copy shaders to build directory
file(COPY shaders DESTINATION ${CMAKE_BINARY_DIR})
