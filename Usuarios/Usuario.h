#ifndef US_H
#define US_H
#include <string>

class Usuario {
    public:
        Usuario(std::string correo, std::string carrera, std::string nombre) : cor(correo), car(carrera), nom(nombre){
        }

        std::string getCorreo(){
            return cor;
        }

        std::string getCarrera(){
            return car;
        }

        std::string getNombre(){
            return nom;
        }

        ~Usuario(){}
        
    protected:
        std::string cor;
        std::string car;
        std::string nom;
        std::string contra;
};

#endif