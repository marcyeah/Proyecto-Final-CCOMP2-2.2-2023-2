#include <iostream>
#include <fstream>
#include <string>
#include "Usuario.h"

Usuario::Usuario(std::string correo, std::string carrera, std::string nombre) : cor(correo), car(carrera), nom(nombre){
        // En esta parte se debe extraer la contraseña del archivo "contrasenas.txt" y asignarla a contra
}

bool Usuario::iniciarSesion(std::string cor, std::string con){
    int cont;
    int ar{0};
    for(int i{0}; cor[i] != '\0'; i++){
        if((cor[i] < 97 && i > 122)){
            std::cout << "Ingrese solo letras minusculas y evite usar caracteres especiales." << std::endl;
        }
        if(cor[i] == 64){
            cont = i;
            ar++;
        }
        if(ar == 1 && cor[i] == 46){
            return true;
        }
        else{
            return false;
        }
    }
    if(con != contra){
        std::cout << "La contrasena que usted ha ingresado es incorrecta." << std::endl;
    }
}

std::string Usuario::getCorreo(){
    return cor;
}

std::string Usuario::getNombre(){
    return nom;
}

std::string Usuario::getCarrera(){
    return car;
}