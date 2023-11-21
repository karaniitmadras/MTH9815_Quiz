# CMakeList.txt : CMake project for MTH9815_Quiz, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("MTH9815_Quiz")

# Add source to this project's executable.
add_executable (MTH9815_Quiz "main.cpp" "MTH9815_Quiz.h" "QuickSort.hpp" "QuickSort.cpp" "MaxHeap.hpp" "MaxHeap.cpp")

# TODO: Add tests and install targets if needed.
