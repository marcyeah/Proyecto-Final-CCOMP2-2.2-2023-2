#include "Aviso.h"
#include <iostream>


Aviso::Aviso(std::string correo, std::string carrera, std::string nombre, const std::string& titulo, const std::string& comentario)
    : Usuario(correo, carrera, nombre), titulo_(titulo), comentario_(comentario) {}

void Aviso::MostrarAviso() {
    std::cout << "Título: " << titulo_ << std::endl;
    std::cout << "Comentario: " << comentario_ << std::endl;
    std::cout << "Autor: " << getCorreo() << std::endl;
}
