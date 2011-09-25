# Compiles on OSX
# TODO: Port to linux

CFLAGS=-I"/usr/X11/include"
LDFLAGS=-framework GLUT -framework OpenGL

CC=cc

all: sim client

sim: sim.o init.o server.o world.o robot.o
	$(CC) $(LDFLAGS) $+ -o $@

client: client.o
	$(CC) $(LDFLAGS) $+ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $+

clean:
	- rm sim client *.o

run: sim
	./sim

