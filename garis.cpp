#include <iostream>
#include <Gl/glut.h>
#include <stdio.h>
void garis();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(600 ,800);
glutInitWindowPosition(100,100);
glutCreateWindow("GARIS");
glClearColor(0.0,0.0,0.0,0.0); //warna latar belakang/ 4 komponen warna yaitu RGB, dan alpha
glMatrixMode(GL_PROJECTION);
//glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
glutDisplayFunc(garis);
glutMainLoop();
}
void garis()
{
glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
glBegin(GL_LINES);//perintah untuk grafik primitif


glColor3f(0.0,0.0,1.0); //warna
glVertex2f(0.3,0.7); //vertikal
glVertex2f(0.7,0.7);


glEnd();
glPointSize(500.0f);
glFlush();
}
