#include <iostream>
#include <string>

#include "Estudiante.h"
#include "Estudiante.cpp"
#include "Foro.h"
#include "Foro.cpp"
#include "Aviso.h"
#include "Aviso.cpp"
#include "Profesor.h"
#include "Profesor.cpp"
#include "Usuario.h"
#include "Usuario.cpp"

int main() {
    string prof[] = {"María", "Luis", "Juan", "Alberto", "Jose", "Rosa"};
    Estudiante estudiante1("shaygb@gmail.com", "Arquitectura", "Luis", "1892uhsaA", prof);

    Aviso aviso1("José@gmail.com", "CCOMP", "Jose", "Aviso 1", "Clases en la mañana");
    Aviso aviso2("Alberto@hotmail.com", "Psicologia", "Alberto", "Aviso 2", "A qué hora?");

    std::cout << estudiante1.getNombre() << std::endl;
    std::cout << estudiante1.getCarrera() << std::endl;

    Foro foro;
    foro.AgregarAviso(aviso1);
    foro.AgregarAviso(aviso2);

    std::cout << "Avisos en el foro:" << std::endl;
    foro.MostrarAvisos();

    return 0;
}
