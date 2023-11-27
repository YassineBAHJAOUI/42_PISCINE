#!/bin/sh
gcc -Wall -Wextra -Werror -c *.c
ar -rcs libft.a *.o
rm *.o #https://www.ibm.com/docs/ko/aix/7.1?topic=ar-command#
