#include <iostream>
#include <string>
#include "Profesor.h"

Profesor::Profesor(string correo, string carrera, string nombre, string materia, int valoracion) : Usuario(correo, carrera, nombre), m(materia), v(valoracion), c(carrera){
	if (v < 1) {
		v = 1;
	}
}

void Profesor::setMateria(string mat) {
	m = mat;
}

string Profesor::getMateria() {
	return m;
}

void Profesor::setValoracion(int valoracion) {
	v = valoracion;
}

int Profesor::getValoracion() {
	return v;
}

void Profesor::setCarrera(string carrera){
	c = carrera;
}

string Profesor::getCarrera() {
	return c;
}