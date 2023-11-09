#include <string>
#include <iostream>
#include "Estudiante.h"
#include "Profesor.h"

Estudiante::Estudiante (std::string correo, std::string carrera, std::string nombre, std::string codigo, std::string* profesores) : Usuario(correo, carrera, nombre), cod(codigo){
    for(int i{0}; i < 6; i++){
        profesores[i] = prof[i];
    }
}

void Estudiante::anadirContribucion(){
    ncont++;
}

void Estudiante::setValoracion(int n, Profesor& profesor){
    if(n > 1){
        profesor.v = n;
        ncont++;
    }
}

void Estudiante::calc(double pe, double pa, int p1, int p2){
    int pe2, pa2;
    int max1{20*p1/100};
    int max2{20*p2/100};
    double res{11.8 - (pe*p1/100 + pa*p2/100)};
    std::cout << "Tu promedio ponderado es: " << pe*p1/100 + pa*p2/100 << std::endl;
    std::cout << "Necesitas sacar un puntaje de " << res << " para aprobar" << std::endl;
}

int Estudiante::getContribuciones(){
    return ncont;
}