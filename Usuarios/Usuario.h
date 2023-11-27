#ifndef US_H
#define US_H

#include <string>

class Usuario {
    public:
        Usuario(std::string correo, std::string carrera, std::string nombre)
            : cor(correo), car(carrera), nom(nombre) {
        }

        std::string Usuario::getCorreo() {
            return cor;
        }

        std::string getCarrera() {
            return car;
        }

        std::string getNombre() {
            nom[0] = toupper(nom[0]);
            for (int i{ 1 }; i < nom.length(); i++) {
                if (nom[i] == '.') {
                    nom[i] = ' ';
                    nom[i + 1] = toupper(nom[i + 1]);
                    break;
                }
            }
            return nom;
        }

        ~Usuario(){}

protected:
    std::string cor;
    std::string car;
    std::string nom;
};

#endif