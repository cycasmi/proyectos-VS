#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class LibroCalificaciones
{
public:
	void mostrarMensaje( string nombreCurso)
	{
		cout << "Bienvenido al libro de calificaciones para " << nombreCurso << endl;
	}
};

int main()
{
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;

	cout << "Escriba el nombre del curso: ";
	getline(cin, nombreDelCurso);
	cout << endl;

	miLibroCalificaciones.mostrarMensaje(nombreDelCurso);

	return 0;
}

