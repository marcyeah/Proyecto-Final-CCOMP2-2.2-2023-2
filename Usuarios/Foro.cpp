#include "Foro.h"
#include <iostream>

void Foro::AgregarAviso(const Aviso& aviso) {
    avisos_.push_back(aviso);
}

void Foro::MostrarAvisos() const {
    for (const Aviso& aviso : avisos_) {
        aviso.MostrarAviso();
        std::cout << "-------------------" << std::endl;
    }
}
