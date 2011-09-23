
#include <GL/glut.h>
//#include "robot.h"

// Sample red robot
void redRobot() {
	// Red robots move faster
	glColor3f(1.0, 0.0, 0.0);

	// Robot is 0.5x0.5 meters
	// TODO: Make relative to world
	glScalef(0.0625, 0.0833, 0.0);

	// Create a simple triangle bot aimed north
	glBegin(GL_TRIANGLES);
		glVertex2f(0.0, 1.0);
		glVertex2f(-1.0, -1.0);
		glVertex2f(1.0, -1.0);
	glEnd();
}

// Draw the current robot on the stack
// TODO: Take a pointer to a robot instead of a random feature
void drawRobot(void (*robot)(), float x, float y, float theta) {
	// Push the stack one deeper so we can play with the top
	glPushMatrix();
	
	glLoadIdentity();

	// Move to where we will draw the robot
	glTranslatef(x, y, 0);
	// Apply the appropriate rotation
	glRotatef(-theta, 0.0, 0.0, 1.0);

	// Put a robot on the stack
	robot();

	// Restore the stack
	glPopMatrix();
}

