# Make OSX work
# TODO: Fix for linux
CC=cc
CFLAGS=-framework GLUT -framework OpenGL
LDFLAGS=-I"/usr/X11/include"

sim: sim.c sim.h robot.h
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS)

