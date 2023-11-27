#ifndef PROF_H
#define PROF_H

#include <string>
#include "Estudiante.h"
#include "Usuario.h"

class Profesor : public Usuario {
private:
    std::string m;
    int v{1};
    std::string c;

public:
    Profesor(std::string correo, std::string carrera, std::string nombre, std::string materia, int valoracion)
        : Usuario(correo, carrera, nombre), m(materia), c(carrera) {
        setValoracion(valoracion);
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

    void setCarrera(std::string carrera) {
        c = carrera;
    }

    std::string getCarrera() {
        return c;
    }

    friend class Estudiante;

};

#endif