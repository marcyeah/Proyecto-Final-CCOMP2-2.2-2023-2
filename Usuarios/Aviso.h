#ifndef AVISO_H
#define AVISO_H

#include <string>
#include "Usuario.h"

class Aviso : public Usuario {
public:
    Aviso(const std::string& correo, const std::string& contrasena, const std::string& titulo, const std::string& comentario);

    void MostrarAviso() const;

private:
    std::string titulo_;
    std::string comentario_;
};

#endif
