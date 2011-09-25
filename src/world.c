
#include <GL/glut.h>

#include "include/sim.h"
#include "include/world.h"
#include "include/robot.h"

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	drawRobot(&redRobot, 0, -1, -45);
	drawRobot(&redRobot, -1, -1, 45);
	drawRobot(&redRobot, -0.5, 0, 180);

	glFlush();
	glutSwapBuffers();
}

void initGlut(int *argcp, char **argv) {
	glutInit(argcp, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(WINDOW_X, WINDOW_Y);
	glutCreateWindow(SIM_NAME);

	glDisable(GL_DEPTH_TEST);
	glClearColor(1.0, 1.0, 1.0, 0.0);

	glutDisplayFunc(display);	// Callback to redraw world
}

