#ifndef PROF_H
#define PROF_H
#include <string>
#include "Estudiante.h"
#include "Usuario.h"

using namespace std;

class Profesor : public Usuario{
	private:
		string m;
		int v{1};
		string c;
		
	public:
		Profesor(string correo, string carrera, string nombre, string materia, int valoracion);

		void setMateria(int mat);

		string getMateria();

		void setValoracion(int valoracion);

		int getValoracion();

		void setCarrera(string carrera);

		string getCarrera();

		friend class Estudiante;
};

#endif