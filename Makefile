CC=cc
CFLAGS=-framework GLUT -framework OpenGL
LDFLAGS=-I"/usr/X11/include"

gl_test: gl_test.c
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS)

