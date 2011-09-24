
#include <GL/glut.h>

#include "include/sim.h"
#include "include/init.h"
#include "include/world.h"
#include "include/robot.h"

int main(int argc, char **argv) {
	initGlut(&argc, argv);
	initServer(&argc, argv);

	glutMainLoop();	// Loop forever
	return 0;
}

