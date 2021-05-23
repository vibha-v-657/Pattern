#include<stdio.h>
#include<math.h>
#include<gl/glut.h>

int theta = 0;
float x, y, r = 20;

void init()
{
	glMatrixMode(GL_PROJECTION_MATRIX);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);
}

void idle()
{
	theta += 6;
	if (theta >= 360)
		theta = 0;
	for (unsigned long int i = 0; i <= 50000000; i++);
	glutPostRedisplay();
}

void disp()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(300, 300, 200, 200);

	glColor3f(1, 0, 0);

	x = 20+r * cos(theta * 3.142 / 180);
	y = 20+r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();

	glColor3f(0, 1, 0);
	x = 1.7*r * cos(theta * 3.142 / 180);
	y = 1.7*r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();


	glColor3f(0, 0, 1);
	x = 1.3* r * cos(theta * 3.142 / 180);
	y = 1.3* r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();

	glViewport(450, 450, 200, 200);

	glColor3f(1, 0, 0);

	x = 20 + r * cos(theta * 3.142 / 180);
	y = 20 + r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();


	glColor3f(0, 1, 0);
	x = 1.7*r * cos(theta * 3.142 / 180);
	y = 1.7*r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();


	glColor3f(0, 0, 1);
	x = 1.3* r * cos(theta * 3.142 / 180);
	y = 1.3* r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();

	glViewport(150, 150, 200, 200);

	glColor3f(1, 0, 0);

	x = 20 + r * cos(theta * 3.142 / 180);
	y = 20 + r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();
	glColor3f(0, 1, 0);
	x = 1.7*r * cos(theta * 3.142 / 180);
	y = 1.7*r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();
	glColor3f(0, 0, 1);
	x = 1.3* r * cos(theta * 3.142 / 180);
	y = 1.3* r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();

	glViewport(0,0, 200, 200);

	glColor3f(1, 0, 0);

	x = 20 + r * cos(theta * 3.142 / 180);
	y = 20 + r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();
	glColor3f(0, 1, 0);
	x = 1.7*r * cos(theta * 3.142 / 180);
	y = 1.7*r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();
	glColor3f(0, 0, 1);
	x = 1.3* r * cos(theta * 3.142 / 180);
	y = 1.3* r * sin(theta * 3.142 / 180);

	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(-1 * y, x);
	glVertex2f(-1 * x, -1 * y);
	glVertex2f(y, -1 * x);
	glEnd();

	glutSwapBuffers();
	glFlush();
}

void mouse(int b, int s, int x, int y)
{
	if (b == GLUT_LEFT_BUTTON && s == GLUT_DOWN)
	{
		glutIdleFunc(idle);
	}

	if (b == GLUT_RIGHT_BUTTON && s == GLUT_DOWN)
		glutIdleFunc(NULL);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 150);
	glutCreateWindow("Idle");
	init();

	glutDisplayFunc(disp);
	glutMouseFunc(mouse);
	glutIdleFunc(idle);
	glutMainLoop();
}