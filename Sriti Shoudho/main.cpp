#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600, 600, -600, 700);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.5, 0.5) ;
    glVertex2d(-390, -60);
    glVertex2d(390, -60);
    glVertex2d(170, 60);
    glVertex2d(-170, 60);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.5, 0.1) ;
    glVertex2d(-130, 280);
    glVertex2d(-100, 280);
    glVertex2d(-100, 0);
    glVertex2d(-130, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5) ;
    glVertex2d(-200, 280);
    glVertex2d(-170, 280);
    glVertex2d(-170, 0);
    glVertex2d(-200, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.5, 0.5) ;
    glVertex2d(-170, 280);
    glVertex2d(-130, 280);
    glVertex2d(-130, 250);
    glVertex2d(-170, 250);

    glEnd();


    int m=0;
    int n=190;
    int r=95;

    float x=m;
    float y=r;
    float p=1-r;

    while(x<=y)
    {
        glColor3f(0.5,0.5,0.1);
        glBegin(GL_POLYGON);

        if(p<0)
        {
            x++;
            p=p+(2*x)+1;
        }
        else if(p>=0)
        {
            x++;
            y--;
            p=p+(2*x)-(2*y)+1;
        }
        glVertex2d(m+x,n+y);
        glVertex2d(m+y,n+x);
        glVertex2d(m-y,n+x);
        glVertex2d(m-x,n+y);
        glVertex2d(m-x,n-y);
        glVertex2d(m-y,n-x);
        glVertex2d(m+x,n-y);
        glVertex2d(m+y,n-x);

        glEnd();
    }


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5) ;
    glVertex2d(-100, 390);
    glVertex2d(100, 390);
    glVertex2d(100, 370);
    glVertex2d(-100, 370);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5);
    glVertex2d(-100, 370);
    glVertex2d(100, 370);
    glVertex2d(60, 300);
    glVertex2d(-60, 300);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 1.0) ;
    glVertex2d(-50, 350);
    glVertex2d(50, 350);
    glVertex2d(30, 300);
    glVertex2d(-30, 300);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5) ;
    glVertex2d(-60, 300);
    glVertex2d(-30, 300);
    glVertex2d(-30, 0);
    glVertex2d(-60, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.5, 0.5) ;
    glVertex2d(60, 300);
    glVertex2d(30, 300);
    glVertex2d(30, 0);
    glVertex2d(60, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.5, 0.5) ;
    glVertex2d(130, 280);
    glVertex2d(100, 280);
    glVertex2d(100, 0);
    glVertex2d(130, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5) ;
    glVertex2d(200, 280);
    glVertex2d(170, 280);
    glVertex2d(170, 0);
    glVertex2d(200, 0);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.1, 0.5) ;
    glVertex2d(170, 280);
    glVertex2d(130, 280);
    glVertex2d(130, 250);
    glVertex2d(170, 250);

    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(600,600);
    glutCreateWindow("Rashed __ 182-15-2155");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
