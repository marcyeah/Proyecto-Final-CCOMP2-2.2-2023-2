#ifndef AVISO_H
#define AVISO_H

#include <string>
#include "Usuario.h"

class Aviso : public Usuario {
public:
    Aviso(std::string correo, std::string carrera, std::string nombre, const std::string& titulo, const std::string& comentario);

    void MostrarAviso();

private:
    std::string titulo_;
    std::string comentario_;
};

#endif
