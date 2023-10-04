#ifndef FORO_H
#define FORO_H

#include <vector>
#include "Aviso.h"

class Foro {
public:
    void AgregarAviso(Aviso& aviso);
    void MostrarAvisos();


private:
    std::vector<Aviso> avisos_;
};

#endif
