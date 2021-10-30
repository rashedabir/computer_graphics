#include<iostream>
#include<cstdio>
using namespace std;
#include<Gl/gl.h>
#include<Gl/glut.h>
#include<math.h>


void myInit (void)

{

    glClearColor(0.5,0.8,1.0,0.0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(0.0, 400.0, 0.0, 380.0);

}

void myDisplay(void)

{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.1, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(20, 0);
    glVertex2i (340, 0);

    glVertex2i (340, 0);
    glVertex2i (340, 10);

    glVertex2i (340, 10);
    glVertex2i (20, 10);

    glVertex2i (20, 10);
    glVertex2i (20, 0);

    glEnd();


    glColor3f(0.1, 0.5, 0.5) ;   //ground 2nd
    glBegin(GL_POLYGON);
    glVertex2i(30, 10);
    glVertex2i (330, 10);

    glVertex2i (330, 10);
    glVertex2i (330, 20);

    glVertex2i (330, 20);
    glVertex2i (30, 20);

    glVertex2i (30, 20);
    glVertex2i (30, 10);

    glEnd();


    glColor3f(0.1, 0.5, 0.5) ;  //ground 3rd
    glBegin(GL_POLYGON);
    glVertex2i(40, 20);
    glVertex2i (320, 20);

    glVertex2i (320, 20);
    glVertex2i (320, 30);

    glVertex2i (320, 30);
    glVertex2i (40, 30);

    glVertex2i (40, 30);
    glVertex2i (40, 20);

    glEnd();




    glColor3f(1.0, 1.0, 1.0) ;    //trn 1
    glBegin(GL_POLYGON);

    glVertex2i(40, 30);
    glVertex2i (180, 62);

    glVertex2i (180, 62);
    glVertex2i (320, 30);

    glVertex2i (320, 30);
    glVertex2i (40, 30);

    glEnd();




    glColor3f(0.1, 0.5, 0.5) ;    //trin 1 main
    glBegin(GL_POLYGON);

    glVertex2i(43, 30);
    glVertex2i (317, 30);

    glVertex2i (317, 30);
    glVertex2i (180, 60);

    glVertex2i (180, 60);
    glVertex2i (43, 30);

    glEnd();


    glColor3f(1.0, 1.0, 1.0) ;  //trn2
    glBegin(GL_POLYGON);

    glVertex2i(60, 30);
    glVertex2i (180, 102);

    glVertex2i (180, 102);
    glVertex2i (300, 30);

    glVertex2i (300, 30);
    glVertex2i (60, 30);
    glEnd();


    glColor3f(0.1, 0.5, 0.5) ;     //trn2 main
    glBegin(GL_POLYGON);

    glVertex2i(62, 30);
    glVertex2i (180, 100);

    glVertex2i (180, 100);
    glVertex2i (298, 30);

    glVertex2i (298, 30);
    glVertex2i (62, 30);

    glEnd();



    glColor3f(1.0, 1.0, 1.0) ;  //trn3
    glBegin(GL_POLYGON);

    glVertex2i(80, 30);
    glVertex2i (180, 152);

    glVertex2i (180, 152);
    glVertex2i (280, 30);

    glVertex2i (280, 30);
    glVertex2i (80, 30);

    glEnd();




    glColor3f(0.1, 0.5, 0.5) ;   //trn3 main
    glBegin(GL_POLYGON);

    glVertex2i(81, 30);
    glVertex2i (180, 150);

    glVertex2i (180, 150);
    glVertex2i (279, 30);

    glVertex2i (279, 30);
    glVertex2i (81, 30);

    glEnd();


    glColor3f(1.0, 1.0, 1.0) ;  //trn 4
    glBegin(GL_POLYGON);

    glVertex2i(100, 30);
    glVertex2i (180, 202);

    glVertex2i (180, 202);
    glVertex2i (260, 30);

    glVertex2i (260, 30);
    glVertex2i (100, 30);

    glEnd();


    glColor3f(0.1, 0.5, 0.5) ;   //trn4 main
    glBegin(GL_POLYGON);

    glVertex2i(101, 30);
    glVertex2i (180, 200);

    glVertex2i (180, 200);
    glVertex2i (259, 30);

    glVertex2i (259, 30);
    glVertex2i (101, 30);

    glEnd();



    glColor3f(1.0, 1.0, 1.0) ;  //trn 5
    glBegin(GL_POLYGON);

    glVertex2i(120, 30);
    glVertex2i (180, 252);

    glVertex2i (180, 252);
    glVertex2i (240, 30);

    glVertex2i (240, 30);
    glVertex2i (120, 30);

    glEnd();




    glColor3f(0.1, 0.5, 0.5) ;   //trn5 main
    glBegin(GL_POLYGON);

    glVertex2i(121, 30);
    glVertex2i (180, 250);

    glVertex2i (180, 250);
    glVertex2i (239, 30);

    glVertex2i (239, 30);
    glVertex2i (121, 30);

    glEnd();



    glColor3f(1.0, 1.0, 1.0) ;  //trn 6
    glBegin(GL_POLYGON);

    glVertex2i(140, 30);
    glVertex2i (180, 302);

    glVertex2i (180, 302);
    glVertex2i (220, 30);

    glVertex2i (220, 30);
    glVertex2i (140, 30);

    glEnd();


    glColor3f(0.1, 0.5, 0.5) ;     //trn6 main
    glBegin(GL_POLYGON);

    glVertex2i(141, 30);
    glVertex2i (180, 300);

    glVertex2i (180, 300);
    glVertex2i (219, 30);

    glVertex2i (219, 30);
    glVertex2i (141, 30);

    glEnd();




    glColor3f(1.0, 1.0, 1.0) ;  //trn 7
    glBegin(GL_POLYGON);

    glVertex2i(160, 30);
    glVertex2i (180, 351);

    glVertex2i (180, 351);
    glVertex2i (200, 30);

    glVertex2i (200, 30);
    glVertex2i (160, 30);

    glEnd();



    glColor3f(0.1, 0.5, 0.5) ;  //trn7 main
    glBegin(GL_POLYGON);

    glVertex2i(161, 30);
    glVertex2i (180, 350);

    glVertex2i (180, 350);
    glVertex2i (199, 30);

    glVertex2i (199, 30);
    glVertex2i (161, 30);

    glEnd();


    glFlush();

}





int main (int argc, char **argv)
{

    glutInit (&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (600, 500);

    glutInitWindowPosition (100, 100);

    glutCreateWindow ("National Memorial");

    glutDisplayFunc (myDisplay);
    myInit();
    glutMainLoop();
    return 0;
}
