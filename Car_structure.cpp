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
void wheel(int x, int y)
{
	float th;
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (int i = 0; i < 360; i++)
	{
		int th = i * (3.1416 / 180); glVertex2f(x + 20 * cos(th), y + 20 * sin(th));
	} 
	glEnd();
}

void Polygon()
{
	// Car Body
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(50, 50);
	glVertex2f(50, 80);
	glVertex2f(225, 80);
	glColor3f(0.0f, 0.5f, 1.0f);
	glVertex2f(225, 50);
	
	glBegin(GL_POLYGON);
	glVertex2f(75, 80);
	glColor3f(0.0f, 0.5f, 1.0f);
	glVertex2f(100, 100);
	glVertex2f(200, 100);
	glVertex2f(225, 80);
	glEnd();
	wheel(100, 50); 
	wheel(190, 50);
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
	glutCreateWindow("Car Structure");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
