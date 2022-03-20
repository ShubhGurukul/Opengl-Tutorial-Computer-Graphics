#include<GL\glut.h>
#include<iostream>
#include<windows.h>

using namespace std;

void myInit()
{
	glClearColor(0, 0.2, 0.2, .5);
	glColor3f(1.0, 0.3, 0.9);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void Polygon()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(40, 200);
	glVertex2i(120, 280);
	glColor3f(0.3, 0.3, 1.0);
	glVertex2i(320, 200);
	glColor3f(0.3, 0.5, 1.0);
	glVertex2i(100, 160);
	glEnd();
	glPointSize(20);
	glBegin(GL_POINT);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(60, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(320, 200);
	glVertex2i(360, 240);
	glVertex2i(340, 200);
	glVertex2i(360, 160);
	glColor3f(0.0, 0.5, 0.5);
	glVertex2i(320, 200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(120, 280);
	glVertex2i(140, 300);
	glVertex2i(280, 216);
	glColor3f(0.0, 0.5, 0.5);
	glVertex2i(120, 280);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 160);
	glVertex2i(140, 200);
	glVertex2i(120, 164);
	glColor3f(0.0, 0.5, 0.5);
	glVertex2i(100, 160);
	glEnd(); 
	
	glFlush();


}


void myDisplay()
{
	Polygon();
	glFlush();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1200, 740);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Fish Art");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
