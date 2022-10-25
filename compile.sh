#!/bin/bash

set -e

CFLAGS="-Wall"
OPTCFLAGS="${CFLAGS} -O2"
DBGCFLAGS="${CFLAGS} -ggdb3 -DDEBUG"

rm -f *.exe *.dbg

gcc ${DBGCFLAGS} \
main.c types.c fpoint.c pointers.c arrays.c structs.c division.c \
-lm -o ctutorial.dbg
