#ifndef EST_H
#define EST_H

#include <string>
#include <iostream>
#include "Usuario.h"
#include "Profesor.h"

class Estudiante : public Usuario {
    public:
        Estudiante(std::string correo, std::string carrera, std::string nombre, std::string codigo, Profesor* profesores) 
        : Usuario(correo, carrera, nombre), cod(codigo), profesores(profesores) {}

        void anadirContribucion() {ncont++;}
        void setValoracion(int n, Profesor& profesor) {
            if (n >= 0 && n <= 10) {
                profesor.setValoracion(n);
                ncont++;
            }
            else {
                std::cout << "La valoración debe estar en el rango de 0 a 10. No se actualizará la valoración del profesor." << std::endl;
            }
        }
        void calc(double pe, double pa, int p1, int p2) {
            int max1{ 20 * p1 / 100 };
            int max2{ 20 * p2 / 100 };
            double res{ 11.8 - (pe * p1 / 100 + pa * p2 / 100) };
            std::cout << "Tu promedio ponderado es: " << pe * p1 / 100 + pa * p2 / 100 << std::endl;
            std::cout << "Necesitas sacar un puntaje de " << res << " para aprobar" << std::endl;
        }
        int getContribuciones() {
            return ncont;
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
        std::string Estudiante::getCodigo() {
            return cod;
        }

    private:
        std::string cod;
        Profesor* profesores;
        int ncont{0};
    };

#endif