#include <iostream>
#include <Gl/glut.h>
#include <stdio.h>
void titik();
main(int argc, char** argv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(600,800);
                glutInitWindowPosition(100,100);
                glutCreateWindow("POLIGON");
                glClearColor(0.0,0.0,0.0,0.0); //warna latar belakang/ 4 komponen warna yaitu RGB, dan alpha
                glMatrixMode(GL_PROJECTION);
                //glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
                glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
                glutDisplayFunc(titik);
                glutMainLoop();
}
void titik()
{
                glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
                glBegin(GL_POLYGON);
//jika ingin segitiganya hanya garis ganti POLYGON dengan LINES
                glColor3f(0.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
                glVertex2f(-0.5,-0.2);
                glVertex2f(0.0,0.5);
                glColor3f (0.0,1.0,0.0);
                glVertex2f(0.5,-0.2);
                glVertex2f(0.0,0.5);
                glColor3f(1.0,1.0,0.0);
                glVertex2f(0.5,-0.2);
                glVertex2f(-0.5,-0.2);

                glPointSize(50.0f);
                glLineWidth(50.0f);
                glEnd();
                glFlush();
}

