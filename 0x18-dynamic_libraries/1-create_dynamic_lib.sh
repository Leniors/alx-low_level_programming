#!/bin/bash
gcc -c -Wall -fpic *.c
gcc -shared -o liball.so *.o
