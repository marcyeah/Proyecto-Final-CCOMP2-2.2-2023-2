#include <string>
#include "Usuario.h"

class Estudiante : public Usuario{
    public:
        Estudiante(std::string correo, std::string carrera, std::string nombre, std::string codigo, std::string* profesores);

        void añadirContribucion();
        void setValoracion(int n, Profesor& profesor);
        int getContribuciones();

    private:
        std::string cod;
        std::string prof[6];
        int ncont{0};
};
