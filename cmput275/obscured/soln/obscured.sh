#!/bin/bash
g++ obscured.cpp -o output -Wall -std=c++11 && ./output
rm -f ./output