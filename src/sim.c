
#include <GL/glut.h>

#include <event.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#include "include/sim.h"
#include "include/server.h"
#include "include/world.h"
#include "include/robot.h"

int main(int argc, char **argv) {
	initGlut(&argc, argv);
	initServer(&argc, argv);

	glutMainLoop();	// Loop forever
	return 0;
}

