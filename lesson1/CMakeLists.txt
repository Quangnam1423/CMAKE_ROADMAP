cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Tutorial_1 VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(lesson1 main.cpp)

# Configure the file
configure_file(ProjectConfig.h.in ProjectConfig.h)

# Include directories
target_include_directories(lesson1 PUBLIC "${PROJECT_BINARY_DIR}")