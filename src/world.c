
#include <GL/glut.h>

#include "include/robot.h"

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	readMessage();

	drawRobot(&redRobot, 0, -1, -45);
	drawRobot(&redRobot, -1, -1, 45);
	drawRobot(&redRobot, -0.5, 0, 180);

	glFlush();
	glutSwapBuffers();
}

