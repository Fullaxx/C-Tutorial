#!/bin/bash

gcc -Wall -ggdb3 main.c types.c fpoint.c pointers.c arrays.c structs.c division.c \
-lm -o tutorial.dbg
