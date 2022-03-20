#include<GL\glut.h>
#include<iostream>
#include<windows.h>

using namespace std;

void myInit()
{
	glClearColor(0, 0.2, 0.2, .5);
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.3, 0.9);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}


void Polygon()
{
	// Hut Body
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4.0); 
	glColor3f(0.5f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(40, 40); 
	glVertex2i(320, 40);
	glVertex2i(40, 200); 
	glColor3f(0.2f, 0.3f, 1.0f);
	glVertex2i(320, 200);
	glVertex2i(40, 200);	
	glVertex2i(40, 40); 
	glVertex2i(320, 200); 
	glVertex2i(320, 40);
	glEnd(); 
	// Hut Window 
	glColor3f(0.65f, 0.17f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2i(220, 60); 
	glVertex2i(300, 60); 
	glVertex2i(220, 150); 
	glVertex2i(300, 150);
	glVertex2i(220, 60);
	glVertex2i(220, 150);
	glVertex2i(300,150);
	glVertex2i(300, 60); 
	glEnd();
	// Hut Window Roof
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(220, 170);
	glVertex2i(300, 170);
	glVertex2i(220, 190);
	glVertex2i(300, 190);
	glVertex2i(220, 170);
	glVertex2i(220, 190);
	glVertex2i(300,190);
	glVertex2i(300, 170);
	glEnd();
	// Hut Door
	glColor3f(0.60f, 0.42f, 0.16f);
	glBegin(GL_POLYGON);
	glVertex2i(130, 40);
	glVertex2i(130, 160);
	glVertex2i(130,160);
	glVertex2i(180, 160);
	glVertex2i(180,100); 
	glVertex2i(180, 40); 
	glVertex2i(120, 40); 
	glVertex2i(170, 40); 
	glEnd();
	// Hut Door Roof
	glColor3f(0.60f, 0.42f, 0.16f);
	glBegin(GL_POLYGON);
	glVertex2i(130, 170);
	glVertex2i(130, 180);
	glVertex2i(130,180);
	glVertex2i(180, 180);
	glVertex2i(180,170);
	glVertex2i(180, 180);
	glVertex2i(130,170);
	glVertex2i(180, 170); 
	glEnd();
	// Roof Triangular
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(10, 200);
	glVertex2i(340, 200);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(200, 390);
	glVertex2i(10, 200);
	glVertex2i(200, 390);
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
	glutCreateWindow("House Structure");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
