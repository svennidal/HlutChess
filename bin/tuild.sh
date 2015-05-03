#!/bin/bash
clang++ -Wall -pedantic -Wsign-compare -std=c++11 -o run/test src/main/Pown.cpp src/main/Square.cpp src/test/*.cpp
