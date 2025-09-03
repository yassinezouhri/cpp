cmake_minimum_required(VERSION 3.10)   # version minimale de CMake requise
project(first_class)                     # nom du projet

set(CMAKE_CXX_STANDARD 11)             # standard C++ utilisé
set(CMAKE_CXX_STANDARD_REQUIRED True)  # obligation d'utiliser ce standard

add_executable(first_class main.cpp point.cpp point.hh)       # création de l'exécutable "mon_exe"
