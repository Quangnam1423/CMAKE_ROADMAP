cmake_minimum_required(VERSION 3.10.2)

# Define the project name and programming language
# C character indicates the C and C++ languages
project(BasicTutorial LANGUAGES C CXX)

add_executable(${PROJECT_NAME} main.c)