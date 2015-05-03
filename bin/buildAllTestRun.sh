#!/bin/bash

KNRM="\x1B[0m"
KRED="\x1B[31m"
KGRN="\x1B[32m"
KYEL="\x1B[33m"
KBLU="\x1B[34m"
KMAG="\x1B[35m"
KCYN="\x1B[36m"
KWHT="\x1B[37m"

printf $KYEL'\n ++++++++++++++++++++++ PROGRAM BUILDING ++++++++++\n'
clang++ -Wall -pedantic -Wsign-compare -ggdb -std=c++11 -o run/run src/main/*.cpp
printf $KMAG'\n ++++++++++++++++++++++ TEST BUILDING ++++++++++\n'
clang++ -Wall -pedantic -Wsign-compare -std=c++11 -o run/test src/main/Pown.cpp src/main/Square.cpp src/test/*.cpp
printf $KCYN'\n ++++++++++++++++++++++ TEST RUNNING ++++++++++\n'
./run/test
printf $KBLU'\n ++++++++++++++++++++++ PROGRAM RUNNING ++++++++++\n'
printf $KNRM
./run/run
