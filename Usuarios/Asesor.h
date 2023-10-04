#include <iostream>
#include <string>
using namespace std;

class Asesor {
private:
	string h;
	float c;

public:
	Asesor(string horario, float calificacion) :h(horario), c(calificacion){
		if (c<0) {
			c = 0;
		}
	}
	void sethorario(string hor) {
		h = hor;
	}
	string gethorario() {
		return h;
	}
	void setcalificaciones(float cal) {
		c = cal;
	}
	
};