#include "Foro.h"
#include <iostream>

void Foro::AgregarAviso(Aviso& aviso) {
    avisos_.push_back(aviso);
}

void Foro::MostrarAvisos() {
    for (Aviso& aviso : avisos_) {
        aviso.MostrarAviso();
        std::cout << "-------------------" << std::endl;
    }
}
