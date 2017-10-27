/*
//Source: http://www.opengl.org/resources/faq/technical/mirror.c

//CILINDERS, CUBES AND MIRROR
#include "Glut/freeglut.h"
#include <iostream>

#define TIMER 30

static float xrot = 0;
bool enmouvement = true;  // le modèle est en mouvement/rotation automatique ou non
bool avecMurs = true;
bool avecCube = true;
bool avecClip = true;
bool avecStencil = true;

static void animer(int value)
{
	xrot += 1;
	if (xrot > 360) xrot -= 360;

	glutPostRedisplay();
	if (enmouvement) glutTimerFunc(TIMER, animer, 0);
}

static void initialiser(void)
{
	glEnable(GL_DEPTH_TEST);

	// // la lumière
	// glEnable( GL_LIGHTING );
	// glEnable( GL_LIGHT1 );
	// GLfloat blanc[4] = { 1, 1, 1, 1 };
	// glLightfv( GL_LIGHT1, GL_DIFFUSE, blanc );
	// glLightfv( GL_LIGHT1, GL_SPECULAR, blanc );
	// // ambient et diffuse suivront glColor
	// glEnable( GL_COLOR_MATERIAL );
	// glColorMaterial( GL_FRONT, GL_AMBIENT_AND_DIFFUSE );
	// glMaterialfv( GL_FRONT, GL_SPECULAR, blanc );
	// glMaterialf( GL_FRONT, GL_SHININESS, 20 );
}

// Cette fonction affiche la scène et ne fait rien de spécial pour le miroir
static void dessinerScene(GLenum ordre)
{
	// positionner la lumière
	//GLfloat pos[4] = { 1.8, 5, 1.8, 1 };
	//glLightfv( GL_LIGHT1, GL_POSITION, pos );

	if (avecMurs)
	{
		// les quatre murs
		// ne pas afficher les murs dont on verrait la face arrière
		glEnable(GL_CULL_FACE);
		glCullFace(GL_BACK);
		// (on donne ici l'ordre dans lequel les faces seront affichées)
		glFrontFace(ordre);

		glBegin(GL_QUADS);
		// les côtés
		glColor3f(1, 1, .5);
		glNormal3f(1, 0, 0);
		glVertex3f(-3, 3, 3);
		glVertex3f(-3, -3, 3);
		glVertex3f(-3, -3, -3);
		glVertex3f(-3, 3, -3);
		glNormal3f(0, 0, 1);
		glVertex3f(-3, 3, -3);
		glVertex3f(-3, -3, -3);
		glVertex3f(3, -3, -3);
		glVertex3f(3, 3, -3);
		glNormal3f(-1, 0, 0);
		glVertex3f(3, 3, -3);
		glVertex3f(3, -3, -3);
		glVertex3f(3, -3, 3);
		glVertex3f(3, 3, 3);
		glNormal3f(0, 0, -1);
		glVertex3f(3, 3, 3);
		glVertex3f(3, -3, 3);
		glVertex3f(-3, -3, 3);
		glVertex3f(-3, 3, 3);
		// le sol
		glColor3f(.5, .5, .5);
		glNormal3f(0, -1, 0);
		glVertex3f(3, -3, 3);
		glVertex3f(3, -3, -3);
		glVertex3f(-3, -3, -3);
		glVertex3f(-3, -3, 3);
		glEnd();

		glDisable(GL_CULL_FACE);
	}

	// les cylindres
	static GLUquadric *quad = NULL;
	if (quad == NULL) quad = gluNewQuadric();

	// un cylindre bleu au milieu de la pièce
	glColor3f(.5, .5, 1);
	glPushMatrix();
	glRotatef(5 * xrot, 1, 0, 0);
	glTranslatef(1, 0, -2);
	gluCylinder(quad, .25, .25, 4, 18, 8);
	glPushMatrix();
	glTranslatef(0, 0, 4);
	gluDisk(quad, 0, .25, 18, 1);
	glPopMatrix();
	glPushMatrix();
	glScalef(1, 1, -1);
	gluDisk(quad, 0, .25, 18, 1);
	glPopMatrix();
	glPopMatrix();

	// un autre cylindre rouge entre le miroir et le mur
	glColor3f(1, .5, .5);
	glPushMatrix();
	glRotatef(-2 * xrot, 1, 0, 0);
	glTranslatef(-2.5, 0, -2);
	gluCylinder(quad, .25, .25, 4, 18, 8);
	glPushMatrix();
	glTranslatef(0, 0, 4);
	gluDisk(quad, 0, .25, 18, 1);
	glPopMatrix();
	glPushMatrix();
	glScalef(1, 1, -1);
	gluDisk(quad, 0, .25, 18, 1);
	glPopMatrix();
	glPopMatrix();

	if (avecCube)
	{
		// le cube
		glColor3f(.8, .75, .7);
		glPushMatrix();
		glTranslatef(-.5, -1, -1);
		glutSolidCube(1.0);
		glPopMatrix();
	}
}

static float miroirX = 2;

// Cette fonction affiche le miroir
static void dessinerMiroir(void)
{
	glBegin(GL_QUADS);
	glVertex3f(-miroirX, 1, 2);
	glVertex3f(-miroirX, -1, 2);
	glVertex3f(-miroirX, -1, -2);
	glVertex3f(-miroirX, 1, -2);
	glEnd();
}

// Cette fonction affiche le miroir
static void dessinerSceneReflechie(void)
{
	glPushMatrix();

#if 1
	if (avecClip)
	{
		// mettre un plan de clipping �  la position du miroir afin de garder
		// ce qui est en avant du miroir et d'éliminer les réflexions des
		// objets qui sont �  l'arrière du miroir
		const GLdouble equation[] = { -1, 0, 0, -miroirX };
		glClipPlane(GL_CLIP_PLANE0, equation);
		glEnable(GL_CLIP_PLANE0);
	}

	// faire une translation pour amener le plan de réflexion �  la position du miroir
	glTranslatef(-miroirX, 0, 0);
	// le miroir est dans le plan YZ; faire une réflexion par -1 en X
	glScalef(-1, 1, 1);
	// faire la translation inverse
	glTranslatef(miroirX, 0, 0);
#else
	// faire une translation pour amener le plan de réflexion �  la position du miroir
	glTranslatef(-miroirX, 0, 0);

	// le miroir est dans le plan YZ; faire une réflexion par -1 en X
	glScalef(-1, 1, 1);

	if (avecClip)
	{
		// c) mettre un plan de clipping �  la position du miroir afin d'éliminer
		// les réflexions des objets qui sont �  l'arrière du miroir
		const GLdouble equation[] = { 1, 0, 0, 0 };
		glClipPlane(GL_CLIP_PLANE0, equation);
		glEnable(GL_CLIP_PLANE0);
	}

	// faire la translation inverse
	glTranslatef(miroirX, 0, 0);
#endif

	// tracer la scène
	//dessinerScene(GL_CW);
	//glDisable(GL_CLIP_PLANE0);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glColor4f(0, 0, 0, .4);
	dessinerScene(GL_CW);
	glDisable(GL_CLIP_PLANE0);

	glPopMatrix();
}

static void afficher(void)
{
	// Donner la position de la caméra
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, 1, 7, -1, 0, 0, 0, 1, 0);
	// et faire une rotation: tourner la scène par rapport �  la caméra
	glRotatef(-.4*xrot, 0, 1, 0);

	if (avecStencil)
	{
		// 0) Effacer l'écran: les couleurs, les valeurs de Z et le stencil
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

		// 1) Remplir le stencil avec le miroir (on veut des 1 pour tous les
		// pixels du miroir, 0 partout ailleurs), mais on ne veut rien tracer � 
		// l'écran pour le moment.  On s'organise donc pour que le test du
		// stencil ne passe jamais tout en remplissant le stencil de 1.
		glEnable(GL_STENCIL_TEST);
		glStencilFunc(GL_NEVER, 1, 1); // void glStencilFunc( GLenum func, GLint ref, GLuint mask );
		glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
		dessinerMiroir();

		// 2) Maintenant que le stencil est rempli de 1 �  la position du miroir,
		// on trace la scène réfléchie.  On fait en sorte que seulement la région
		// du stencil avec des 1 soit tracée (c'est-� -dire seulement la région du miroir)
		glStencilFunc(GL_EQUAL, 1, 1);
		glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
		dessinerSceneReflechie();
		glDisable(GL_STENCIL_TEST);

	}
	else
	{
		// 0) Effacer l'écran: les couleurs et les valeurs de Z
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// 1) Tracer d'abord la scène réfléchie
		dessinerSceneReflechie();

		// 2) Mettre tous les z de la scène réfléchie �  la profondeur maximale (=1)
		glClear(GL_DEPTH_BUFFER_BIT);

	}

	// 3) Tracer maintenant le miroir comme une vitre presque complètement
	// transparente. Ça mettra les bonnes valeurs de z pour le miroir.
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glColor4f(0, 0, 0, .4);
	dessinerMiroir();
	glDisable(GL_BLEND);

	// 4) Tracer la scène normalement
	dessinerScene(GL_CCW);

	// Et c'est tout!
	glutSwapBuffers();
	// y'a une erreur ?
	{
		int err = glGetError();
		if (err != GL_NO_ERROR)
			std::cout << "Erreur " << err << std::endl;
	}
}

static void redimensionner(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50, (float)w / (float)h, 1, 20);
}

void clavier(unsigned char touche, int, int)
{
	switch (touche)
	{
	case '\e': // escape
		exit(0);
		break;
	case ' ':
		enmouvement = !enmouvement;
		animer(0);
		break;
	case 'm':
		avecMurs = !avecMurs;
		glutPostRedisplay();
		break;
	case 't':
		avecCube = !avecCube;
		glutPostRedisplay();
		break;
	case 'c':
		avecClip = !avecClip;
		glutPostRedisplay();
		break;
	case 's':
		avecStencil = !avecStencil;
		glutPostRedisplay();
		break;
	case '0':
		xrot = 0;
		glutPostRedisplay();
		break;
	case '-':
	case '_':
		xrot -= 1;
		glutPostRedisplay();
		break;
	case '+':
	case '=':
		xrot += 1;
		glutPostRedisplay();
		break;
	}
	std::cout << "//@miroir;" << " avecMurs=" << avecMurs << " avecCube=" << avecCube << " avecClip=" << avecClip << " avecStencil=" << avecStencil << std::endl;
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DEPTH | GLUT_DOUBLE | GLUT_STENCIL);
	glutInitWindowSize(600, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("miroir2");
	glutKeyboardFunc(clavier);

	glutDisplayFunc(afficher);
	glutReshapeFunc(redimensionner);
	glutTimerFunc(TIMER, animer, 0);

	initialiser();

	glutMainLoop();
	return(0);
}
*/