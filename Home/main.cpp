#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, 1.0, 1.0);


	glBegin(GL_QUADS);

	//Trapezoid
	glColor3f (0.4, 0.4, 0.4);
	glVertex3f(0.05f, 0.05f, 0.0f);
	glVertex3f(0.94f, 0.05f, 0.0f);
	glVertex3f(0.94f, 0.60f, 0.0f);
	glVertex3f(0.05f, 0.60f, 0.0f);


	//door-top
	glColor3f (0.7, 0.6, 0.0);
	glVertex3f(0.36f, 0.50f, 0.0f);
	glVertex3f(0.56f, 0.50f, 0.0f);
	glVertex3f(0.56f, 0.55f, 0.0f);
	glVertex3f(0.36f, 0.55f, 0.0f);

	//door
	glColor3f (0.7, 0.6, 0.0);
	glVertex3f(0.36f, 0.05f, 0.0f);
	glVertex3f(0.56f, 0.05f, 0.0f);
	glVertex3f(0.56f, 0.46f, 0.0f);
	glVertex3f(0.36f, 0.46f, 0.0f);

	//window-top
	glColor3f (1.0, 0.0, 0.0);
	glVertex3f(0.64f, 0.50f, 0.0f);
	glVertex3f(0.90f, 0.50f, 0.0f);
	glVertex3f(0.90f, 0.56f, 0.0f);
	glVertex3f(0.64f, 0.56f, 0.0f);

	//window
	glColor3f (1.0, 0.0, 0.0);
	glVertex3f(0.64f, 0.20f, 0.0f);
	glVertex3f(0.90f, 0.20f, 0.0f);
	glVertex3f(0.90f, 0.46f, 0.0f);
	glVertex3f(0.64f, 0.46f, 0.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	//Triangle
	glColor3f (1.0, 0.0, 1.0);
	glVertex3f(0.0f, 0.60f, 0.0f);
	glVertex3f(1.0f, 0.60f, 0.0f);
	glVertex3f(0.60, 1.0f, 0.0f);

	glEnd();//End triangle coordinates
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 0.6, 0.1, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Home Shape");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
