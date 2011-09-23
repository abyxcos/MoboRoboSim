# Compiles on OSX
# TODO: Port to linux

CFLAGS=-I"/usr/X11/include"
LDFLAGS=-framework GLUT -framework OpenGL

CC=cc

all: sim

sim: sim.o robot.o
	$(CC) $(LDFLAGS) $+ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $+ -o $@

clean:
	- rm sim *.o

run: sim
	./sim

