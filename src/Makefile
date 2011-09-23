# Make OSX work
# TODO: Port to linux
CC=cc
CFLAGS=-framework GLUT -framework OpenGL
LDFLAGS=-I"/usr/X11/include"

sim: sim.c sim.h robot.h
	$(CC) $(CFLAGS) $@.c -o ../bin/$@ $(LDFLAGS)

run: sim
	../bin/sim

