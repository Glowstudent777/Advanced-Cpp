#!/bin/bash

SRC_FILES="main.cpp Budget.cpp"

OUTPUT="program"

g++ -std=c++17 -Wall -Wextra -o $OUTPUT $SRC_FILES

if [ $? -eq 0 ]; then
    echo "Compilation successful! Running ./$OUTPUT"
    clear
    ./$OUTPUT
else
    echo "Compilation failed."
fi
