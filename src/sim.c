
#include <GL/glut.h>		// Portable windowing library
//#include <stdio.h>
//#include <stdlib.h>

#include "sim.h"
#include "robot.h"

void init(void) {
	glDisable(GL_DEPTH_TEST);
	glClearColor(1.0, 1.0, 1.0, 0.0);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	drawRobot(&redRobot, 0, -1, -45);
	drawRobot(&redRobot, -1, -1, 45);
	drawRobot(&redRobot, -0.5, 0, 180);

	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(WINDOW_X, WINDOW_Y);
	glutCreateWindow(SIM_NAME);
	init();
	glutDisplayFunc(display);	// Callback to redraw world

	glutMainLoop();	// Loop forever
	return 0;
}

