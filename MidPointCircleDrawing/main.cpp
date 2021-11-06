#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(-500.0, 500.0, -500.0, 500.0, -1.0, 1.0);
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);
    glBegin(GL_POINTS);
    for (int i=-200; i<=200; i++)
    {
        glVertex2d(0,i);
        glVertex2d(i,0);
        glVertex2d(i,i);
        glVertex2d(i,-i);
    }

    double m=0, n=0, r=114; // as my ID is 182-15-2155, r = 2155 % 157 = 114
    double p0=1-r;
    double pk=p0;
    double pk2;
    double x=m, y=n+r;
    glBegin(GL_POINTS);
    glVertex2d(x,y);
    while(1)
    {
        if(pk<0)
        {
            x++;
            pk2=pk +(2*x)+1;
        }
        else if(pk>=0)
        {
            x++;
            y--;
            pk2=pk +(2*x)+1-(2*y);
        }
        pk=pk2;
        glColor3f(0.1, 0.5, 0.5);
        glVertex2d(x,y);
        glColor3f(0.1, 0.7, 0.1);
        glVertex2d(x,-y);
        glColor3f(0.7, 0.1, 0.1);
        glVertex2d(-x,y);
        glColor3f(0.1, 0.7, 0.1);
        glVertex2d(-x,-y);
        glColor3f(0.1, 0.5, 0.5);
        glVertex2d(y,x);
        glColor3f(0.7, 0.1, 0.1);
        glVertex2d(-y,x);
        glColor3f(0.1, 0.7, 0.1);
        glVertex2d(y,-x);
        glColor3f(0.1, 0.5, 0.5);
        glVertex2d(-y,-x);
        if(x>=y)
        {
            break;
        }
    }
    glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Mid Point Algorithm_Rashed2155");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
