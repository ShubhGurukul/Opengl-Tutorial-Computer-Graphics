#include<GL\glut.h>
#include<iostream>
#include<windows.h>

using namespace std;

void myInit()
{
	glClearColor(0, 0.0, 0.2, 1.0);
	glColor3f(1.0, 0.3, 0.9);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}
void wheel(int x, int y)
{
	float th;
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.7, 0.4);
	for (int i = 0; i < 360; i++)
	{
		th = i * (3.1416 / 180);
		glVertex2f(x + 30 * cos(th), y + 30 * sin(th));
		glColor3f(i / 360.0, 0.7, 0.4);
	}
	glEnd();
}
void Polygon()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 100.0, 0.0);
	glBegin(GL_LINES);
	//body
	glVertex2f(250.0, 300.0);
	glVertex2f(250.0, 100.0);
	//legs
	glVertex2f(250.0, 100.0);
	glVertex2f(150.0, 40.0);
	glVertex2f(250.0, 100.0);
	glVertex2f(350.0, 40.0);
	//arms
	glVertex2f(250.0,180.0);
	glVertex2f(150.0,210.0);
	glVertex2f(250.0,180.0);
	glVertex2f(350.0,210.0);
	glEnd();
	wheel(250, 300); 
	
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
	glutCreateWindow("Man Art");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
