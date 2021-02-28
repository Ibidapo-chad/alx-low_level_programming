#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c | echo -e "\n"

ar -rc liball.a *.o

ranlib liball.a
