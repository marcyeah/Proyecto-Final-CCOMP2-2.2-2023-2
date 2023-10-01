#include <string>
#include "Estudiante.h"
#include "Profesor.h"

Estudiante::Estudiante (std::string correo, std::string carrera, std::string nombre, std::string codigo, std::string* profesores) : Usuario(correo, carrera, nombre), cod(codigo){
    for(int i{0}; i < 6; i++){
        profesores[i] = prof[i];
    }
}

void Estudiante::añadirContribucion(){
    ncont++;
}

void Estudiante::setValoracion(int n, Profesor& profesor){
    if(n > 1){
        profesor.v = n;
        ncont++;
    }
}

int Estudiante::getContribuciones(){
    return ncont;
}