#ifndef PROF_H
#define PROF_H

#include <string>
#include "Estudiante.h"
#include "Usuario.h"

class Profesor : public Usuario{
	private:
		std::string m;
		int v{1};
		std::string c;
		std::string p;
		
	public:
		Profesor(std::string correo, std::string carrera, std::string nombre, std::string materia, int valoracion, std::string pregunta) : 
		Usuario(correo, carrera, nombre), m(materia), v(valoracion), c(carrera), p(pregunta){
			if (v < 1) {
				v = 1;
			}
		}

		void setMateria(std::string mat) {
			m = mat;
		}

		std::string getMateria() {
			return m;
		}

		void setValoracion(int valoracion) {
			if (valoracion >= 0 && valoracion <= 10) {
				v = valoracion;
			}
			else {
				std::cout << "La valoración debe estar en el rango de 0 a 10. Se establecerá a 1 por defecto." << std::endl;
				v = 1;
			}
    	}

		int getValoracion() {
			return v;
		}

		void setCarrera(std::string carrera){
			c = carrera;
		}

		std::string getCarrera() {
			return c;
		}

		string getPregunta(){
        	return p;
    	}

		void mainProfesor() {
			int nuevaValoracion = 0;

			Profesor profesores[] = {
				Profesor("Basurco@ucsp.edu.pe", "Ciencia de la computacion", "BASURCO LUIS", "ANALISIS NUMERICO", 0, "Locura Instantanea"),
				Profesor("Kelly@ucsp.edu.pe", "Ciencia de la computacion", "VIZCONDE KELLY", "PROGRAMACION DE VIDEOJUEGOS", 0, "Probar que raiz de dos es irracional"),
				Profesor("Daniel@ucsp.edu.pe", "Ciencia de la computacion", "GUTIERREZ DANIEL", "ESTRUCTURAS DISCRETAS II", 0, "Recurrencias no homogeneas"),
				Profesor("ahmamani@ucsp.edu.pe", "Ciencia de la computacion", "MAMANI ALIAGA ALVARO MAMANI", "CIENCIA DE LA COMPUTACION I", 0, "Fibonacci")
			};

			int tamanoArray = sizeof(profesores) / sizeof(profesores[0]);

			std::cout << "Lista de Profesores Disponibles:" << std::endl;
			for (int i = 0; i < tamanoArray; i++) {
				std::cout << i + 1 << ". " << profesores[i].getNombre() << std::endl;
			}

			while (true) {
				int opcionProfesor;
				cout << "Seleccione el numero del profesor que desea valorar (0 para salir): ";
				cin >> opcionProfesor;

				if (opcionProfesor >= 1 && opcionProfesor <= tamanoArray) {
					Profesor& profesorSeleccionado = profesores[opcionProfesor - 1];

					cout << "\nInformacion del Profesor Seleccionado:" << endl;
					cout << "Nombre: " << profesorSeleccionado.getNombre() << endl;
					cout << "Correo: " << profesorSeleccionado.getCorreo() << endl;
					cout << "Carrera: " << profesorSeleccionado.getCarrera() << endl;
					cout << "Materia: " << profesorSeleccionado.getMateria() << endl;
					cout << "Preguntas comunes: " << profesorSeleccionado.getPregunta() << endl;

					cout << "\nIngrese la nueva valoracion del profesor (de 0 a 10): ";
					cin >> nuevaValoracion;

					profesorSeleccionado.setValoracion(nuevaValoracion);

					cout << "\nNueva Valoracion del Profesor: " << profesorSeleccionado.getValoracion() << endl << endl;
				}
				else if (opcionProfesor == 0) {
					cout << "Saliendo del programa" << endl;
					break; 
				}
				else {
					cout << "Opcion no valida. Intente de nuevo." << endl;
				}
			}
		}

		friend class Estudiante;
};

#endif