#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 255);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 230);
glVertex2i(300, 400);
glVertex2i(600, 400);
glVertex2i(600, 230);
glEnd();


glColor3ub (0, 0, 255);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 300);
glVertex2i(300, 400);
glVertex2i(500, 400);
glVertex2i(500, 300);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(389,300);
glVertex2i(389, 400);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(411,400);
glVertex2i(411, 300);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(300,339);
glVertex2i(500, 339);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(300,361);
glVertex2i(500, 361);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(311,400);
glVertex2i(500, 311);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(300,389);
glVertex2i(489, 300);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(300,311);
glVertex2i(489, 400);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(311,300);
glVertex2i(500, 389);
glEnd();

glColor3ub (255,0, 0 );
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(390, 300);
glVertex2i(390, 400);
glVertex2i(410, 400);
glVertex2i(410, 300);
glEnd();

glColor3ub (255,0, 0 );
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 340);
glVertex2i(300, 360);
glVertex2i(500, 360);
glVertex2i(500, 340);
glEnd();

glColor3ub (255,0, 0 );
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 390);
glVertex2i(310, 400);
glVertex2i(500, 310);
glVertex2i(490, 300);
glEnd();

glColor3ub (255,0, 0 );
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 310);
glVertex2i(490, 400);
glVertex2i(500, 390);
glVertex2i(310, 300);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(340,255);
glVertex2i(340,295 );
glVertex2i(370, 275);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(330,275);
glVertex2i(360,295 );
glVertex2i(360, 255);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(550,370);
glVertex2i(540,340 );
glVertex2i(560, 340);
glEnd();

glColor3ub (255,255, 255 );
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(540,360);
glVertex2i(560,360 );
glVertex2i(550, 330);
glEnd();






glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}







