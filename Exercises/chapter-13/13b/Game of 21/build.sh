#!/bin/bash

SRC_FILES="main.cpp Die.cpp"

OUTPUT="program"

g++ -std=c++17 -Wall -Wextra -o $OUTPUT $SRC_FILES

if [ $? -eq 0 ]; then
    echo "Compilation successful! Run ./$OUTPUT"
else
    echo "Compilation failed."
fi
