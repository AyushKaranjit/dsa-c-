cmake_minimum_required(VERSION 3.10) # Specifies the minimum CMake version required
project(DSA_Projects CXX)            # Defines the project name and enables C++

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # ADD THIS LINE HERE

# You can add a loop to find all .cpp files and add them as executables
# This is a common pattern for competitive programming or small projects
file(GLOB_RECURSE SOURCES "*.cpp")

foreach(SRC_FILE ${SOURCES})
    # Get the base name of the file (e.g., zerosmall from zerosmall.cpp)
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)

    # Add an executable target for each .cpp file found
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE})

    # Optional: Link common libraries if needed, e.g., for data structures
    # target_link_libraries(${EXECUTABLE_NAME} your_library_name)
endforeach()

# Optional: Set C++ standard (e.g., C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # Disables GNU extensions for standard compliance
