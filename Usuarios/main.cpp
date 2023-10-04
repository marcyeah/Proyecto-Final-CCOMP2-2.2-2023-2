#include <iostream>
#include "Foro.h"

int main() {
    Aviso aviso1("José@g.com", "xd", "Aviso 1", "Clases en la mañana");
    Aviso aviso2("Alberto@h.com", "safdfsa", "Aviso 2", "A qué hora?");

    Foro foro;
    foro.AgregarAviso(aviso1);
    foro.AgregarAviso(aviso2);

    std::cout << "Avisos en el foro:" << std::endl;
    foro.MostrarAvisos();

    return 0;
}
