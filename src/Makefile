# Compiles on OSX
# TODO: Port to linux

CFLAGS=-I"/usr/X11/include"
LDFLAGS=-framework GLUT -framework OpenGL

BUILDDIR=../build
BINDIR=../bin

CC=cc

all: sim client

sim: $(BUILDDIR)/*.o
	$(CC) $(LDFLAGS) $+ -o $(BINDIR)/$@

client: client.o
	$(CC) $(LDFLAGS) $+ -o $(BINDIR)/$@

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $+ -o $(BUILDDIR)/

clean:
	- rm $(BINDIR)/* $(BUILDDIR)/*

run: sim
	$(BINDIR)/sim

