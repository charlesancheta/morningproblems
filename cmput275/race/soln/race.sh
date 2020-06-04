#!/bin/bash
g++ race.cpp -o output -Wall -std=c++11 && ./output
rm -f ./output
