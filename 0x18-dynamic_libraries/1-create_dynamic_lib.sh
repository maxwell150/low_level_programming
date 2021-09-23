#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pendantic *.c -shared -o liball.so

