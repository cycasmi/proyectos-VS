/*
//DRAWS TEAPOT!

#include <iostream>
#include <Glut\freeglut.h>
#include <math.h>

// la fenêtre graphique
GLsizei g_largeur = 900;   // la largeur de la fenêtre
GLsizei g_hauteur = 600;   // la hauteur de la fenêtre

// variables pour définir le point de vue
double theta = 0.0;        // angle de rotation de la caméra (coord. sphériques)
double phi = 0.0;          // angle de rotation de la caméra (coord. sphériques)
double dist = 0.0;         // distance (coord. sphériques)

GLfloat pos = 0.0;         // position du plan de coupe

void initialisation()
{
	theta = 0.;
	phi = 1.;
	dist = 5.;

	glEnable(GL_DEPTH_TEST);
}

void tracerRectangle()
{
	glPushMatrix(); {
		glTranslatef(pos, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex3f(-0.2, 1.0, 0.2); glVertex3f(-0.2, -1.0, 0.2);
		glVertex3f(0.2, -1.0, 0.2); glVertex3f(0.2, 1.0, 0.2);
		glEnd();
	}glPopMatrix();
}

void afficherScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(30.0, (GLdouble)g_largeur / (GLdouble)g_hauteur, 0.1, 300.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(dist*sin(phi)*sin(theta), dist*cos(phi), dist*sin(phi)*cos(theta), 0, 0, 0, 0, 1, 0);

	// rectangle
	glEnable(GL_STENCIL_TEST);
	glStencilFunc(GL_ALWAYS, 1, 1);
	glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);

	glDisable(GL_DEPTH_TEST);
	glColor3f(0.0, 0.0, 1.0);
	tracerRectangle();
	glEnable(GL_DEPTH_TEST);

	glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);

	// théière fil de fer seulement lorsque le stencil contient des '1'
	glStencilFunc(GL_EQUAL, 1, 1);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(0.0, 1.0, 0.0);
	glutSolidTeapot(1.0);

	// théière pleine rouge seulement lorsque le stencil contient des '0'
	glStencilFunc(GL_EQUAL, 0, 1);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidTeapot(1.0);

	glDisable(GL_STENCIL_TEST);

	glutSwapBuffers();
}

void redimensionnement(GLsizei w, GLsizei h)
{
	g_largeur = w;
	g_hauteur = h;
	glViewport(0, 0, w, h);
	glutPostRedisplay();
}

void clavier(unsigned char touche, int x, int y)
{
	switch (touche)
	{
	case '\e': // escape
		exit(0);
		break;
	case '+':
	case '=':
		dist -= 0.5;
		glutPostRedisplay();
		break;
	case '_':
	case '-':
		dist += 0.5;
		glutPostRedisplay();
		break;
	}
}

// fonction de gestion du clavier spécial
void clavierSpecial(int touche, int x, int y)
{
	switch (touche)
	{
	case GLUT_KEY_DOWN:
	case GLUT_KEY_LEFT:
		pos -= 0.05;
		glutPostRedisplay();
		break;

	case GLUT_KEY_UP:
	case GLUT_KEY_RIGHT:
		pos += 0.05;
		glutPostRedisplay();
		break;
	}
}

int dernierx = 0, derniery = 0;
void sourisClic(int button, int state, int x, int y)
{
	if (state == GLUT_DOWN)
	{
		dernierx = x;
		derniery = y;
	}
}

void sourisMouvement(int x, int y)
{
	theta += (dernierx - x) / 100.0;
	phi += (derniery - y) / 50.0;
	dernierx = x;
	derniery = y;
	glutPostRedisplay();
}

int main(int argc, char *argv[])
{
	// initialisation de GLUT
	glutInit(&argc, argv);
	// paramétrage de l'affichage
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE | GLUT_STENCIL);
	// taille de la fenetre
	glutInitWindowSize(g_largeur, g_hauteur);
	// création de la fenêtre
	glutCreateWindow("INF2705");

	// référencement de la fonction de rappel pour l'affichage
	glutDisplayFunc(afficherScene);
	// référencement de la fonction de rappel pour le redimensionnement
	glutReshapeFunc(redimensionnement);
	// référencement de la fonction de gestion des touches
	glutKeyboardFunc(clavier);
	// référencement de la fonction de gestion des touches spéciales
	glutSpecialFunc(clavierSpecial);
	// référencement de la fonction de rappel pour le mouvement de la souris
	glutMotionFunc(sourisMouvement);
	// référencement de la fonction de rappel pour le clic de la souris
	glutMouseFunc(sourisClic);

	initialisation();

	// boucle principale de gestion des evenements
	glutMainLoop();

	// le programme n'arrivera jamais jusqu'ici
	return EXIT_SUCCESS;
}
*/