#!/bin/sh

set -xe


CFLAGS="-Wall -Werror -std=c11 -pedantic -ggdb `pkg-config --cflags sdl2`"
LIBS="`pkg-config --libs sdl2` -lm"

gcc $CFLAGS -o white main.c $LIBS