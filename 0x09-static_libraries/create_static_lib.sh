#!/bin/bash
ar -rc liball.a *.o $(gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c)
