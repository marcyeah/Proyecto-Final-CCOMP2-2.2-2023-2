#ifndef FORO_H
#define FORO_H

#include <vector>
#include <iostream>
#include "Aviso.h"

class Foro {
public:
    void AgregarAviso(Aviso& aviso) {
    avisos_.push_back(aviso);
}

    void MostrarAvisos() {
        for (Aviso& aviso : avisos_) {
            std::cout << "-------------------" << std::endl;
            aviso.MostrarAviso();
        }
    }
private:
    std::vector<Aviso> avisos_;
};

#endif
