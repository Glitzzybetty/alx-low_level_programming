#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rcs liball.a *.o
rm *.o
