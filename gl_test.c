#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

void init(void) {
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if(h==0)
		gluPerspective(80, (float)w, 1.0, 5000.0);
	else
		gluPerspective(80, (float)w/(float)h, 1.0, 5000.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y) {
	switch(key) {
		case 27: // Escape
			exit(0);
			break;
		case 'f':
			glutFullScreen();
			break;
		case 'w':
			glutReshapeWindow(250, 250);
			break;
		default:
			break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(250, 250);
	glutCreateWindow(argv[0]);
	init();
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

