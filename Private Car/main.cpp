#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);

}

void circle(int x,int y)
{
    float m;
    glBegin(GL_POLYGON);


    for(int i=0; i<360; i++)
    {
        m=i*3.142/180;
        glVertex2f(x+20*cos(m),y+20*sin(m));
    }

    glEnd();

}


void Draw ()
{

    glClear(GL_COLOR_BUFFER_BIT);


//Bottom
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.1,0.5);
    glVertex2d(140,200);
    glVertex2d(400,200);
    glVertex2d(400,140);
    glVertex2d(140,140);

    glEnd();


//Top
    glBegin(GL_POLYGON);

    glColor3f(0.1,0.5,0.5);

    glVertex2d(170,200);
    glVertex2d(400,200);
    glVertex2d(370,250);
    glVertex2d(220,250);

    glEnd();


//Window1
    glBegin(GL_POLYGON);

    glColor3f(0.1,0.5,0.5);

    glVertex2d(235,235);
    glVertex2d(265,235);
    glVertex2d(265,215);
    glVertex2d(235,215);
    glEnd();


//Window2
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.1,0.5);

    glVertex2d(310,235);
    glVertex2d(340,235);
    glVertex2d(340,215);
    glVertex2d(310,215);
    glEnd();



// 2 circles(wheels)

    glColor3f(0.1,0.5,0.5);

    circle(220,140); //1st wheel
    circle(330,140); //2nd wheel

    glutSwapBuffers();

}



int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(300,0);
    glutInitWindowSize(700,600);
    glutCreateWindow("Lab Task 8 Private Car (182-15-2155)");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
