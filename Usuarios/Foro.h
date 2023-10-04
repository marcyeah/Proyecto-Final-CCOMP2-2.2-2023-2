#ifndef FORO_H
#define FORO_H

#include <vector>
#include "Aviso.h"

class Foro {
public:
    void AgregarAviso(const Aviso& aviso);
    void MostrarAvisos() const;


private:
    std::vector<Aviso> avisos_;
};

#endif
