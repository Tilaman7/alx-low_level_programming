#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIc *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PART=.:$LD_LIBRARY_PATH
