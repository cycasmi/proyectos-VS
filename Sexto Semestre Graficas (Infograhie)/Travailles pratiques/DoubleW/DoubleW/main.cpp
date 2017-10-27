// Pr�noms, noms et matricule des membres de l'�quipe:
// - Cynthia  Castillo (1878153)
#include <iostream>
#include "inf2705.h"
#pragma warning(disable:4996)

// variables pour l'utilisation des nuanceurs
//Defining ints using GLu-int with the purpouse of being more crossplatform
GLuint progBase;  // le programme de nuanceurs de base
GLint locVertex = -1;
GLint locColor = -1;
GLint locmatrModel = -1;
GLint locmatrVisu = -1;
GLint locmatrProj = -1;

// matrices de du pipeline graphique
MatricePipeline matrModel;
MatricePipeline matrVisu;
MatricePipeline matrProj;

bool afficheAxes = false;      // indique si on affiche les axes
GLenum modePolygone = GL_FILL; // comment afficher les polygones

#if 1 
// pour un W
float p1[3] = { -4.0, 2.0, 0.0 };
float p2[3] = { -3.0, -3.0, 0.0 };
float p3[3] = { -1.0, -3.0, 0.0 };
float p4[3] = { 0.0, 0.0, 0.0 };
float p5[3] = { 1.0, -3.0, 0.0 };
float p6[3] = { 3.0, -3.0, 0.0 };
float p7[3] = { 4.0, 2.0, 0.0 };
#else
// pour une fl�che (Voir apprentissage suppl�mentaire)
float p1[3] = { -3.0, 1.0, 0.0 };
float p2[3] = { -3.0, -1.0, 0.0 };
float p3[3] = { 0.0, -1.0, 0.0 };
float p4[3] = { -0.5, -2.5, 0.0 };
float p5[3] = { 3.0, 0.0, 0.0 };
float p6[3] = { -0.5, 2.5, 0.0 };
float p7[3] = { 0.0, 1.0, 0.0 };
#endif

void chargerNuanceurs()
{
	// charger le nuanceur de base
	{
		// cr�er le programme
		progBase = glCreateProgram();

		// attacher le nuanceur de sommets
		{
			GLuint nuanceurObj = glCreateShader(GL_VERTEX_SHADER);
			glShaderSource(nuanceurObj, 1, &ProgNuanceur::chainesSommetsMinimal, NULL);
			glCompileShader(nuanceurObj);
			glAttachShader(progBase, nuanceurObj);
			ProgNuanceur::afficherLogCompile(nuanceurObj);
		}
		// attacher le nuanceur de fragments
	  {
		  GLuint nuanceurObj = glCreateShader(GL_FRAGMENT_SHADER);
		  glShaderSource(nuanceurObj, 1, &ProgNuanceur::chainesFragmentsMinimal, NULL);
		  glCompileShader(nuanceurObj);
		  glAttachShader(progBase, nuanceurObj);
		  ProgNuanceur::afficherLogCompile(nuanceurObj);
	  }

	  // faire l'�dition des liens du programme
	  glLinkProgram(progBase);

	  ProgNuanceur::afficherLogLink(progBase);
	  // demander la "Location" des variables
	  if ((locVertex = glGetAttribLocation(progBase, "Vertex")) == -1) std::cerr << "!!! pas trouv� la \"Location\" de Vertex" << std::endl;
	  if ((locColor = glGetAttribLocation(progBase, "Color")) == -1) std::cerr << "!!! pas trouv� la \"Location\" de Color" << std::endl;
	  if ((locmatrModel = glGetUniformLocation(progBase, "matrModel")) == -1) std::cerr << "!!! pas trouv� la \"Location\" de matrModel" << std::endl;
	  if ((locmatrVisu = glGetUniformLocation(progBase, "matrVisu")) == -1) std::cerr << "!!! pas trouv� la \"Location\" de matrVisu" << std::endl;
	  if ((locmatrProj = glGetUniformLocation(progBase, "matrProj")) == -1) std::cerr << "!!! pas trouv� la \"Location\" de matrProj" << std::endl;
	}
}

void initialiser()
{
	// donner la couleur de fond
	glClearColor(0.0, 0.0, 0.0, 1.0);

	// activer le m�lange de couleur pour bien voir les possibles plis � l'affichage
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// charger les nuanceurs
	chargerNuanceurs();

	glPointSize(3.0);
}

void conclure()
{
}

void FenetreTP::afficherScene()
{
	glPolygonMode(GL_FRONT_AND_BACK, modePolygone);

	// effacer l'ecran et le tampon de profondeur
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

#if 0
	// d�finir le pipeline graphique
	// VERSION OpenGL 2.1
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-12, 12, -8, 8, -10, 10); // la taille de la fen�tre

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

#else
	// d�finir le pipeline graphique
	// VERSION OpenGL 4.x
	glUseProgram(progBase);

	// d�finir le pipeline graphique
	matrProj.Ortho(-12, 12, -8, 8, -10, 10); // la taille de la fen�tre
	glUniformMatrix4fv(locmatrProj, 1, GL_FALSE, matrProj);

	matrVisu.LoadIdentity();
	glUniformMatrix4fv(locmatrVisu, 1, GL_FALSE, matrVisu);

	matrModel.LoadIdentity();
	glUniformMatrix4fv(locmatrModel, 1, GL_FALSE, matrModel);

	// Attention: Red�finir "glTranslatef()" ici afin de ne rien changer ensuite
#define glTranslatef( X, Y, Z )                                         
	{
		//matrModel.Translate((X), (Y), (Z));
		glUniformMatrix4fv(locmatrModel, 1, GL_FALSE, matrModel);
	}

#endif

	// afficher les axes
	if (afficheAxes) FenetreTP::afficherAxes();

	// ...

	// exemple: utiliser du rouge opaque
	glColor3f(1, 0, 0);
	// mieux encore: utiliser du rouge, mais avec un alpha de 0.8 plut�t que 1.0 pour bien voir les possibles plis � l'affichage
	glColor4f(1, 0, 0, 0.8);

	// la fen�tre varie en X de -12 � 12 et en Y de -8 � 8
	glColor3f(1, 1, 1);

	// � modifier  ...

	//Divisions
	glTranslatef(0.0, 0.0, 0.0);//for start drawing from the center of the canvas
	glBegin(GL_LINES);
	{
		//Horizontal lines
		glVertex3f(-12.0, 0.0, 0.0);
		glVertex3f(12.0, 0.0, 0.0);

		//Vertical lines
		glVertex3f(-4.0, 8.0, 0.0);
		glVertex3f(-4.0, -8.0, 0.0);
		glVertex3f(4.0, 8.0, 0.0);
		glVertex3f(4.0, -8.0, 0.0);
	}
	glEnd();


	//Starting to draw the W's
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(0.0, 4.0, 0.0);

	//Pantalon vert
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	{ //Needs three coordinates to draw each triangle
		glVertex3fv(p1);
		glVertex3fv(p2);
		glVertex3fv(p3);

		glVertex3fv(p1);
		glVertex3fv(p3);
		glVertex3fv(p4);

		glVertex3fv(p1);
		glVertex3fv(p4);
		glVertex3fv(p7);

		glVertex3fv(p4);
		glVertex3fv(p5);
		glVertex3fv(p7);

		glVertex3fv(p5);
		glVertex3fv(p6);
		glVertex3fv(p7);
	}
	glEnd();

	//Pantalon rouge
	glTranslatef(-8.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	{//draws four sided figures individualy for each 4 points
		glVertex3fv(p1);
		glVertex3fv(p2);
		glVertex3fv(p3);
		glVertex3fv(p4);

		glVertex3fv(p1);
		glVertex3fv(p4);
		glVertex3fv(p7);
		glVertex3fv(p1);

		glVertex3fv(p4);
		glVertex3fv(p5);
		glVertex3fv(p6);
		glVertex3fv(p7);
	}
	glEnd();

	//Pantalon bleu
	glTranslatef(16.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUAD_STRIP);
	{//links every two points given to start forming quards

		glVertex3fv(p2);
		glVertex3fv(p3);//this will draw nothing because doenst forms a quad

		glVertex3fv(p1);
		glVertex3fv(p4);

		glVertex3fv(p4);
		glVertex3fv(p7);

		glVertex3fv(p5);
		glVertex3fv(p6);
	}
	glEnd();

	//Pantalon jaune
	glTranslatef(0.0, -8.0, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
	{//after a inicial triangle, each aditional point will form a triangle using the last two used
		glVertex3fv(p4);
		glVertex3fv(p5);
		glVertex3fv(p6);

		glVertex3fv(p7);

		glVertex3fv(p4);

		glVertex3fv(p1);

		glVertex3fv(p3);

		glVertex3fv(p2);
	}
	glEnd();

	//Pantalon mauve   
	glTranslatef(-8.0, 0.0, 0.0);
	glColor4f(1.0, 0.0, 1.0, 0.8);
	glBegin(GL_POLYGON);
	{
		glVertex3fv(p4);
		glVertex3fv(p1);
		glVertex3fv(p2);
		glVertex3fv(p3);
		glVertex3fv(p4);
		glVertex3fv(p5);
		glVertex3fv(p6);
		glVertex3fv(p7);
		glVertex3fv(p7);
		glVertex3fv(p1);
		glVertex3fv(p2);
		glVertex3fv(p4);
	}
	glEnd();

	glTranslatef(-8.0, 0.0, 0.0);
	//Pantalon cyan
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);
	{
		glVertex3fv(p4);
		glVertex3fv(p5);
		glVertex3fv(p6);
		glVertex3fv(p7);
		glVertex3fv(p1);
		glVertex3fv(p2);
		glVertex3fv(p3);
	}
	glEnd();

}

void FenetreTP::redimensionner(GLsizei w, GLsizei h)
{
	glViewport(0, 0, w, h);
}

void FenetreTP::clavier(TP_touche touche)
{
	switch (touche)
	{
	case TP_ECHAP:
	case TP_q: // Quitter l'application
		quit();
		break;

	case TP_x: // Activer/d�sactiver l'affichage des axes
		afficheAxes = !afficheAxes;
		std::cout << "// Affichage des axes ? " << (afficheAxes ? "OUI" : "NON") << std::endl;
		break;

	case TP_v: // Recharger les fichiers des nuanceurs et recr�er le programme
		chargerNuanceurs();
		std::cout << "// Recharger nuanceurs" << std::endl;
		break;

	case TP_g: // Permuter l'affichage en fil de fer ou plein
		modePolygone = (modePolygone == GL_FILL) ? GL_LINE : GL_FILL;
		break;

	default:
		std::cout << " touche inconnue : " << (char)touche << std::endl;
		imprimerTouches();
		break;
	}
}

void FenetreTP::sourisClic(int button, int state, int x, int y)
{
}

void FenetreTP::sourisWheel(int x, int y)
{
}

void FenetreTP::sourisMouvement(int x, int y)
{
}

int main(int argc, char *argv[])
{
	// cr�er une fen�tre
	FenetreTP fenetre("INF2705 TP0");

	// allouer des ressources et d�finir le contexte OpenGL
	initialiser();

	bool boucler = true;
	while (boucler)
	{
		// affichage
		fenetre.afficherScene();
		fenetre.swap();

		// r�cup�rer les �v�nements et appeler la fonction de rappel
		boucler = fenetre.gererEvenement();
	}

	// d�truire les ressources OpenGL allou�es
	conclure();

	return 0;
}