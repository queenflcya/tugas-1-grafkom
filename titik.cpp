#include<GL/glut.h>
void titik();
void titik()
{
                glClear(GL_COLOR_BUFFER_BIT); //merah
                glBegin(GL_POLYGON);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(-0.5f,-0.5f);
                glVertex2f(-0.5f,0.5f);
                glVertex2f(0.5f,0.5f);
                glVertex2f(0.5f,-0.5f);
                glVertex2f(-0.5f,-0.5f);
                glPointSize(50.0f);
                glEnd();//akhir perintah OpenGL

                //titik2
                glPointSize(5.5);//ukuran titik piksel
                glBegin(GL_POINTS);//perintah untuk grafik primitif
                glColor3f (0.0,1.0,0.0);//warna hijau
                glVertex2f(-0.3,0.25);
                glColor3f(0.0,0.0,1.0);//warna biru
                glVertex2f(-0.25,0.1);
                glColor3f(1.0,1.0,0.0); //warna kuning
                glVertex2f(-0.2,0.25);
                glColor3f(0.0,1.0,1.0);//warna cyan
                glVertex2f(-0.1,0.25);
                glColor3f(0.0,0.0,0.0); //warna hitam
                glVertex2f(-0.15,0.1);
                glColor3f(1.0,0.0,1.0);//warna magenta
                glVertex2f(-0.1,-0.03);
                //glPointSize(2.0);
                glEnd();
                glFlush();
}
main(int argc, char** argv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(800,800);
                glutInitWindowPosition(100,100);
                glutCreateWindow("TITIK TITIK");
                glClearColor(0.0,0.0,0.0,0.0);
                glMatrixMode(GL_PROJECTION);
                glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
                glutDisplayFunc(titik);
                glutMainLoop();
}
