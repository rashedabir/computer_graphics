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
    glVertex2d(0.05, 0.05);
    glVertex2d(0.94, 0.05);
    glVertex2d(0.94, 0.60);
    glVertex2d(0.05, 0.60);


    //door-top
    glColor3f (0.7, 0.6, 0.0);
    glVertex2d(0.36, 0.50);
    glVertex2d(0.56, 0.50);
    glVertex2d(0.56, 0.55);
    glVertex2d(0.36, 0.55);

    //door
    glColor3f (0.7, 0.6, 0.0);
    glVertex2d(0.36, 0.05);
    glVertex2d(0.56, 0.05);
    glVertex2d(0.56, 0.46);
    glVertex2d(0.36, 0.46);

    //window-top
    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.64, 0.50);
    glVertex2d(0.90, 0.50);
    glVertex2d(0.90, 0.56);
    glVertex2d(0.64, 0.56);

    //window
    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.64, 0.20);
    glVertex2d(0.90, 0.20);
    glVertex2d(0.90, 0.46);
    glVertex2d(0.64, 0.46);

    glEnd();


    glBegin(GL_TRIANGLES);

    //Triangle
    glColor3f (1.0, 0.0, 1.0);
    glVertex2d(0.0, 0.60);
    glVertex2d(1.0, 0.60);
    glVertex2d(0.60, 1.0);

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
