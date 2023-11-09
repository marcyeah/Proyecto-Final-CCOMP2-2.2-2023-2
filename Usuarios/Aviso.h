#ifndef AVISO_H
#define AVISO_H

#include <string>
#include <iostream>
#include "Usuario.h"

class Aviso : public Usuario {
public:
    Aviso(std::string correo, std::string carrera, std::string nombre, const std::string& titulo, const std::string& comentario)
    : Usuario(correo, carrera, nombre), titulo_(titulo), comentario_(comentario) {}

void MostrarAviso() {
    std::cout << "Nombre: " << getNombre() << std:: endl;
    std::cout << "Título: " << titulo_ << std::endl;
    std::cout << "Comentario: " << "\"" << comentario_ << "\"" << std::endl;
    std::cout << "Autor: " << getCorreo() << std::endl;
}

private:
    std::string titulo_;
    std::string comentario_;
};

#endif
