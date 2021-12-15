#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void Circle(int x,int y,int r)
{
    float m;
    glBegin(GL_POLYGON);


    for(int i=0; i<360; i++)
    {
        m=i*3.142/180;
        glVertex2f(x+r*cos(m),y+r*sin(m));
    }

    glEnd();

}

void Bresenham(int a,int b,int c,int d)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,0,0); //My ID : 182-15-2155

    int xstart=a,ystart=b,xend=c,yend=d;

    int dy=yend-ystart;
    int dx=xend-xstart;
    int diff=2*dy-2*dx;
    int k0=2*dy-dx;
    int k=k0;
    int x=xstart,y=ystart;


    glBegin(GL_POINTS);


    while(true)
    {
        if(k>=0)
        {
            x++;
            y++;
            k=k+diff;
        }
        else
        {
            x++;
            k=k+2*dy;

        }

        glVertex2d(x,y);

        if(x==xend && y==yend)
            break;
    }




}
void Draw()
{

    glColor3f(0.94,1.00,0.54);
    Circle(300,300,100);

    glBegin(GL_TRIANGLES);
    //triangle 1
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(270, 340);
    glVertex2i(330, 340);
    glVertex2i(300, 390);

    //triangle 2
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(330, 340);
    glVertex2i(360, 290);
    glVertex2i(380, 335);

    //triangle 3
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(245, 290);
    glVertex2i(270, 340);
    glVertex2i(220, 335);

    //triangle 4
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(245, 235);
    glVertex2i(300, 260);
    glVertex2i(245, 290);

    //triangle 5
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(300, 260);
    glVertex2i(360, 290);
    glVertex2i(360, 240);

    //triangle 6
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(270, 340);
    glVertex2i(245, 290);
    glVertex2i(300, 260);

    //triangle 7
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(300, 260);
    glVertex2i(360, 290);
    glVertex2i(330, 340);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(270, 340);
    glVertex2i(330, 340);
    glVertex2i(300, 260);
    glVertex2i(360, 290);
    glVertex2i(330, 340);

    glEnd();

    glutSwapBuffers();

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,20);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lab final Star");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
