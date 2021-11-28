cmake_minimum_required(VERSION 3.12)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(LeetCode
        src/Constructor.cpp
        src/FirstClass.cpp
        src/Maze.cpp
        src/MergeList.cpp
        src/MyList.cpp
        src/MyTree.cpp
        src/RemoveDuplicate.cpp
        src/RemoveDuplicate.h
        src/main.cpp src/MyArray.cpp src/MyArray.h src/MyMatrix.cpp src/MyMatrix.h src/MySearch.cpp src/MySearch.h src/MyVector.cpp src/MyVector.h src/MyString.cpp src/MyString.h src/SortAndSearch.cpp src/SortAndSearch.h src/DynamicProgramming.cpp src/DynamicProgramming.h)
