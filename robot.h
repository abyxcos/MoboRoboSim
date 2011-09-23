
void pushRobot();
void drawRobot(float x, float y);

// Push a/the robot to the stack
void pushRobot() {
	glPushMatrix();

	// Red robots move faster
	glColor3f(1.0, 0.0, 0.0);

	// Robot is 0.5x0.5 meters
	// TODO: Make relative to world
	glScalef(0.0625, 0.0833, 0.0);

	// Create a simple triangle bot aimed north
	glBegin(GL_TRIANGLES);
		glVertex2f(0.0, 0.0);
		glVertex2f(1.0, 0.0);
		glVertex2f(0.5, 1.0);
	glEnd();

	glPopMatrix();
}

// Draw the current robot on the stack
// TODO: Take a pointer to a robot instead of a random feature
void drawRobot(float x, float y) {
	// Push the stack one deeper so we can play with the top
	//glPushMatrix();
	glLoadIdentity();

	// Translate the pushed robot to it's new location
	glTranslatef(x, y, 0);

	// Restore the stack
	//glPopMatrix();
	pushRobot();
}

