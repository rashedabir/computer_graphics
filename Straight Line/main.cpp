#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 300.0, 0.0, 300.0, -1.0, 1.0);
}

void Draw()
{

    int xs=21, ys=87, xe=387, ye=321;     //starting and ending point
    //x1 is xs, x2 is xe, y1 is ys, y2 is ye
    double xi, yi, m;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 1,0, 0);

    m = (ye-ys)/(xe-xs);

    if(xe>xs){
        if(m<=1){
            xi = 1;
            yi = m;
        }   //case 1
        else if(m>1){
            yi = 1;
            xi = 1/m;
        }
    }       //case 1 or case 2
    else if(xs>xe){
        if(m<=1){
            xi = -1;
            yi = -m;
        }   //case 3
        else if(m>1){
            xi = (-1)/m;
            yi = -1;
        }   //case 4
    }       //case 3 or case 4

    //here xi is change of x and yi is change of y

    glBegin(GL_POINTS);
    glVertex2i(round(xs), round(ys));

    while(1){
        xs = xs+xi;
        ys = ys+yi;

        glVertex2i(round(xs), round(ys));

        if(xs==xe || ys==ye){
            break;
        }
    }

    glEnd();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
