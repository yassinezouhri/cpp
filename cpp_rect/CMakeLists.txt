cmake_minimum_required(VERSION 3.10)   # version minimale de CMake requise
project(Rectangle)                     # nom du projet

set(CMAKE_CXX_STANDARD 11)             # standard C++ utilisé
set(CMAKE_CXX_STANDARD_REQUIRED True)  # obligation d'utiliser ce standard

add_executable(Rectangle main.cpp rectangle.cpp rectangleUtils.cpp)       # création de l'exécutable "mon_exe"
