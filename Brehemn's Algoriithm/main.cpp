#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 500.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 0.1, 0.5, 0.5);
    int a=380, b=190, c=570, d=342;
    int dy=d-b;
    int dx=c-a;
    int diff1=2*dy-2*dx;
    int p0=2*dy-dx;
    int p=p0;
    int x=a, y=b;
    glBegin(GL_POINTS);
    glVertex2d(x,y);
    while(1)
    {

        if(p>=0)
        {
            x++;
            y++;
            p=p+diff1;
        }
        else
        {
            x++;
            p=p+2*dy;
        }
        glVertex2d(x,y);
        if(x==c && y==d)
            break;
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
    glutCreateWindow("Brehemn's Algoriithm");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
