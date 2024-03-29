#include<Windows.h>
#include<GL.h>
#include<glut.h>

void myInit(void);
void myDisplay(void);
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("FARAZ's house");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(10.0);
	gluOrtho2D(0, 600, 0, 600);  //x1 x2 y1 y2
}
void myDisplay(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(200, 0);
	glVertex2i(200, 250);
	glVertex2i(200, 250);
	glVertex2i(300, 250);
	glVertex2i(300, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(50, 400);
	glVertex2i(50, 550);
	glVertex2i(50, 550);
	glVertex2i(150,550);
	glVertex2i(150, 445);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(30, 0);
	glVertex2i(30,390);
	glVertex2i(550, 390);
	glVertex2i(550,0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(0, 380);
	glVertex2i(270, 500);
	glVertex2i(270, 500);
	glVertex2i(600,370);
	glEnd();
	glFlush();

}