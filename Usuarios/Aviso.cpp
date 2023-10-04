#include "Aviso.h"
#include <iostream>


Aviso::Aviso(const std::string& correo, const std::string& contra, const std::string& titulo, const std::string& comentario)
    : Usuario(correo, contra), titulo_(titulo), comentario_(comentario) {}

void Aviso::MostrarAviso() const {
    std::cout << "Título: " << titulo_ << std::endl;
    std::cout << "Comentario: " << comentario_ << std::endl;
    std::cout << "Autor: " << getCorreo() << std::endl;
}
