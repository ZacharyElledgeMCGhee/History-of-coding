#include <windows.h>  
#include <gl/GL.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <fstream>


///<<<<<<<<<<<<<<<<<<<<< myInit >>>>>>>>>>>>>>>>>>>>
 void myInit(void)
 {
    glClearColor(0.1, 0.3, 0.5, 1.0);    
    glColor3f(0.0f, 0.0f, 0.0f);       
    glPointSize(5.0);                       // point size
    glMatrixMode(GL_PROJECTION);            // set up appropriate matrices- to be explained
    glLoadIdentity();                       
    gluOrtho2D(0.0, 500.0, 0.0, 350.0);     
}

///<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>
// the redraw function
void drawPolyLineFile(char * dino.txt)
{
    fstream inStream;
	inStream.open(dino.txt, ios ::in); //open the file
	if(inStream.fail())
		return;
	glClear(GL_COLOR_BUFFER_BIT);
	GLint numpolys, numLines, x, y;
	inStream >> numpolys;
	for(int j = 0; j<numpolys; j++)
	{
		inStream >> numLines;
		glBegin(GL_LINE_STRIP);
		for (int i = 0; i < numLines; i++)
		{
			inStream >> x >> y;
			glVertex2i(x, y);
		}
		glEnd();
	}
	glFlush();
	inStream.close();
}
///<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>
int main(int argc, char **argv)
{
    glutInit(&argc, argv);                          // initialize the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    // set the display mode
    //glutInitWindowSize(150,250);                    // set the window size //wideth and Height
    glutInitWindowPosition(100, 150);               // set the window position on the screen
    glutCreateWindow("Dino");                       // open the screen window(with its exciting title)
    glutDisplayFunc(drawPolyLineFile);                    
    myInit();
    glutMainLoop();                                 // go into a perpetual loop
	setWindow(0, 1000.0, 0, 650.0);
	for(int i = 0; i<5; i++)
	{
		for(int j = 0; j<5; j++)
		{
			glViewport(i*100, j*65, 100, 65);
			drawPolyLineFile("dino.txt");
		}
	}
    return 0;
}
