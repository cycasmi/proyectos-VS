/*
//FIRST EXAMPLE
//******DRAWS TRIANGLE AND SQUARE WITH COLORS AND MOVEMENT*****
#include <cstdlib>
#if defined(__WIN32__)
#include <windows.h>
#endif
#include <Glut\freeglut.h>

void initialisation()
{
	glShadeModel(GL_SMOOTH); //used to give a flat or a continous(smooth) color effect
	glClearColor(0.0, 0.0, 0.0, 1.0); //specify clear values for the color buffers
	glEnable(GL_DEPTH_TEST);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-3.0, 3.0, -3.0, 3.0, 4.0, 10.0);
	glMatrixMode(GL_MODELVIEW); //Specify wich matrix is the current matrix.
							    //In this case, applies subsequent matrix operations to the modelview matrix stack.
}

void afficherScene()
{
	static float rtri = 0, rquad = 0; //Initilization of rotation speed
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //clears buffer to present values

	glLoadIdentity(); //Replaces current matrix with the identity matrix. 
					  //In other words, resets the matrix to its default state.

	glTranslatef(-1.5, 0.0, -6.0); //multiplies current matrix by translation matrix
	glRotatef(rtri, 0.0, 1.0, 0.0); //same but by rotation matri

	glBegin(GL_TRIANGLES); //delimit the vertices of a primitive
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-1.0, -1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, -1.0, 0.0);
	glEnd();

	glLoadIdentity();

	glTranslatef(1.5, 0.0, -6.0);
	glRotatef(rquad, 1.0, 0.0, 0.0);

	glColor3f(0.5, 0.5, 1.0);
	glBegin(GL_QUADS);
	glVertex3f(-1.0, 1.0, 0.0);
	glVertex3f(1.0, 1.0, 0.0);
	glVertex3f(1.0, -1.0, 0.0);
	glVertex3f(-1.0, -1.0, 0.0);
	glEnd();

	rtri += 0.05;
	rquad -= 0.05;

	// here refers to the region of (video) memory where the computer renders image frames.
	//With double-buffering, two such buffers are used, the front buffer and the back buffer. The front buffer is the one that contains the frame you are currently seeing.
	//The back buffer is the one in which the computer is currently busy rendering the next frame.
	//When that rendering is done, the two buffers are swapped, instantly updating the image you see to be the next - now - current frame.
	glutSwapBuffers(); 	//is the GLUT function that instructs the computer that you are done with the current frame and the buffers should be swapped so that that frame be displayed

}

void redimensionnement(GLsizei w, GLsizei h)
{
	glViewport(0, 0, w, h);
}

void clavier(unsigned char touche, int x, int y)
{
	switch (touche)
	{
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

void clavierSpecial(int touche, int x, int y)
{
	switch (touche)
	{
	case GLUT_KEY_UP:
		glutFullScreen();
		break;
	case GLUT_KEY_DOWN:
		glutReshapeWindow(500, 500);
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); //initialize the GLUT library.
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("premiers pas");
	initialisation();
	glutDisplayFunc(afficherScene);
	//glutReshapeFunc(redimensionnement); //have no idea why it needs this
	//glutKeyboardFunc(clavier); //or this
	glutSpecialFunc(clavierSpecial);
	glutIdleFunc(afficherScene);
	glutMainLoop();
	return(0);
}
*/



//*********************************************************
/*
//SECOND (and last) EXAMPLE
//******DRAWS PYRAMID AND CUBE WITH COLORS AND MOVEMENT*****
#include <cstdlib>
#if defined(__WIN32__)
#include <windows.h>
#endif
#include <Glut\glut.h>

void initialisation()
{
	glShadeModel(GL_SMOOTH);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-3.0, 3.0, -3.0, 3.0, 4.0, 10.0); //glFrustum — multiply the current matrix by a perspective matrix
	glMatrixMode(GL_MODELVIEW);
}

void afficherScene()
{
	static float rtri = 0, rquad = 0;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	glTranslatef(-1.5, 0.0, -6.0);
	glRotatef(rtri, 0.0, 1.0, 0.0);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, -1.0, -1.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, -1.0, -1.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();

	glLoadIdentity();
	glTranslatef(1.5, 0.0, -7.0);
	glRotatef(rquad, 1.0, 1.0, 1.0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(-1.0, 1.0, -1.0);
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(-1.0, 1.0, -1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(-1.0, 1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glEnd();

	rtri += 0.05;
	rquad -= 0.05;

	glutSwapBuffers();
}

void redimensionnement(GLsizei w, GLsizei h)
{
	glViewport(0, 0, w, h);
}

void clavier(unsigned char touche, int x, int y)
{
	switch (touche)
	{
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

void clavierSpecial(int touche, int x, int y)
{
	switch (touche)
	{
	case GLUT_KEY_UP:
		glutFullScreen();
		break;
	case GLUT_KEY_DOWN:
		glutReshapeWindow(500, 500);
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("premiers pas");
	initialisation();
	glutDisplayFunc(afficherScene);
	glutReshapeFunc(redimensionnement);
	glutKeyboardFunc(clavier);
	glutSpecialFunc(clavierSpecial);
	glutIdleFunc(afficherScene);
	glutMainLoop();
	return(0);
}
*/