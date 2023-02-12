#include <windows.h>   // use as needed for your system
#include <gl/Gl.h>
#include <gl/glu.h>
#include <gl/glut.h>

//<<<<<<<<<<<<<<<<<<<<<<< myInit >>>>>>>>>>>>>>>>>>>>
 void myInit(void)
 {
    glClearColor(1.0, 1.0, 1.0, 0.0);      // set the bg color to a bright white
    glColor3f(0.0f, 0.0f, 0.0f);           // set the drawing color to black 
 	glPointSize(4.0);		            //set the point size to 4 by 4 pixels
	glMatrixMode(GL_PROJECTION);// set up appropriate matrices- to be explained 
	glLoadIdentity();// to be explained
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);// to be explained
}

//<<<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>
// the redraw function
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);     // clear the screen 
	glBegin(GL_POINTS);
	//orions belt
		glColor3f(1.0f, 0.0f, 0.0f); // Red
		glVertex2i(300, 750);        
		glVertex2i(200, 750);
		glVertex2i(100, 750);
		
	// big dipper
		glColor3f(0.0f, 1.0f, 0.0f); // Green
		glVertex2i(50, 150);        
		glVertex2i(100, 140);
		glVertex2i(130, 110);
		glVertex2i(160, 90);         
		glVertex2i(150, 60);
		glVertex2i(200, 50);
		glVertex2i(220, 80);
		
	// aquarius
		glColor3f(0.0f, 0.0f, 1.0f); // Blue
		glVertex2i(100, 300);
		glVertex2i(140, 280);
		glVertex2i(120, 410);         
		glVertex2i(210, 340);
		glVertex2i(230, 370);
		glVertex2i(140, 450);
		glVertex2i(220, 440);
		glVertex2i(340, 440);         
		glVertex2i(400, 550);
		glVertex2i(330, 600);
		glVertex2i(340, 540);
		glVertex2i(310, 570);
		glVertex2i(550, 480);         
		glVertex2i(400, 350);
		glVertex2i(750, 400);
		glVertex2i(780, 390);
	glEnd();	
	glFlush();		                 // send all output to display 
}
//<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>
int main(int argc, char **argv)
{
	glutInit(&argc, argv);          // initialize the toolkit
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
	glutInitWindowSize(800, 800);     // set the window size
	glutInitWindowPosition(100, 150); // set the window position on the screen
	glutCreateWindow("Constellations"); // open the screen window(with its exciting title)
	glutDisplayFunc(myDisplay);     // register the redraw function
	myInit();                   
	glutMainLoop(); 		     // go into a perpetual loop
	
	return 0;
}
