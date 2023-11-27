#ifndef EST_H
#define EST_H

#include <string>
#include <iostream>
#include "Usuario.h"
#include "Profesor.h"

class Estudiante : public Usuario{
    public:
        Estudiante (std::string correo, std::string carrera, std::string nombre, std::string codigo, Profesor* profesores) 
        : Usuario(correo, carrera, nombre), cod(codigo), profesores(profesores){}

        void anadirContribucion(){
            ncont++;
        }

        void setValoracion(int n, Profesor& profesor){
            if(n > 1){
                profesor.v = n;
                ncont++;
            }
        }

        void calc(double pe, double pa, int p1, int p2){
            int pe2, pa2;
            int max1{20*p1/100};
            int max2{20*p2/100};
            double res{11.8 - (pe*p1/100 + pa*p2/100)};
            std::cout << "Tu promedio ponderado es: " << pe*p1/100 + pa*p2/100 << std::endl;
            std::cout << "Necesitas sacar un puntaje de " << res << " para aprobar" << std::endl;
        }

        void valorarProfesor(std::string correoProfesor, int valoracion) {
            int tamanoArray = 100;
            for (int i = 0; i < tamanoArray; i++) {
                if (profesores[i].getCorreo() == correoProfesor) {
                    profesores[i].setValoracion(valoracion);
                    break;
                }
            }
        }

        int getContribuciones(){
            return ncont;
        }

    private:
        std::string cod;
        std::string prof[6];
        Profesor* profesores;
        int ncont{0};
};

#endif