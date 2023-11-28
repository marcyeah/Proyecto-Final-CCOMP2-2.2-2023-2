#include <iostream>
#include <vector>
#include <string>

#include "Horario.h"

class Asesor {
	private:
		std::string a;
		Horario h;
		float c;

	public:
		Asesor(std::string asesor, Horario horario, float calificacion) :h(horario), c(calificacion){
			if (c<0) {
				c = 0;
			}
		}
		void setHorario(Horario hor) {
			h = hor;
		}
		std::string getHorario() {
			return h.toString();
		}
		void setCalificaciones(float cal) {
			c = cal;
		}
		void imprimirAsesor(const Asesor& clase) {
			std::cout << clase.a << ":\n";
			std::cout << "Horario: " << getHorario() << "\nCalificación: " << clase.c << std::endl;
		}
		void imprimirListaAsesores(const std::vector<std::string>& nombres) {
			for (int i = 0; i < nombres.size(); ++i) {
				std::cout << (i + 1) << ". " << nombres[i] << std::endl;
			}
		}
};