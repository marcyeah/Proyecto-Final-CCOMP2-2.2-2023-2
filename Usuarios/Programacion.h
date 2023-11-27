#ifndef PROGRAMACION_H
#define PROGRAMACION_H

#include <iostream>
#include <string>
#include <vector>
#include "Cursos.h"
using namespace std;

// Clase derivada para Matemáticas
class Programacion : public Cursos {
public:
    Programacion() : Cursos("Programacion") {}

private:
//Uso de polimorfismo en los metodos
    void mostrar_libros_de_texto() const override {
        cout << "\nUsted escogio libros de texto:" << endl;
        cout << "\nLibros de Programacion." << endl;
        cout << "libro 1: Curso de programación en C++" <<endl;
        cout << "Link del libro: https://www.uv.es/sto/cursos/c++/curso95.pdf\n" << endl;
        cout << "Libro 2: Aprenda a pensar como un programador con Python" << endl;
        cout << "Link del libro: https://argentinaenpython.com/quiero-aprender-python/aprenda-a-pensar-como-un-programador-con-python.pdf\n" << endl;
        cout << "Lbro 3: Fundamentos de programación en Java" <<endl;
        cout << "Link del libro: https://www.tesuva.edu.co/phocadownloadpap/Fundamentos%20de%20programcion%20en%20Java.pdf\n"<< endl;
    }

    void mostrar_videos_en_linea() const override {
        cout << "\nUsted escogio videos en linea:" << endl;
        cout << "\nVideos en Linea." << endl;
        cout << "Canal recomendado: Programacion ATS (aprendes diversos lenguajes de programacion)" << endl;
        cout << "Link del canal: https://www.youtube.com/@ProgramacionATS\n" << endl;
        cout << "Canal recomendado 2: pildorasinformaticas" << endl;
        cout << "Link del canal: https://www.youtube.com/@pildorasinformaticas\n" << endl;
        cout << "Canal recomendado 3: La Geekipedia De Ernesto" << endl;
        cout << "Link del canal: https://www.youtube.com/@LaGeekipediaDeErnesto\n" << endl; 
    }

    void mostrar_ejercicios_practicos() const override {
        cout << "\nUsted escogio ejercicios practicos:" << endl;
        cout << "\nEjercicios practicos. Aqui hay algunos link de PDFs para que practiques esta materia." << endl;
        cout << "Link del PDF 1: https://www.editorialeidec.com/wp-content/uploads/2020/10/Algoritmos-resueltos-con-Python.pdf\n" << endl;
        cout << "Link del PDF 2: https://upcommons.upc.edu/bitstream/handle/2099.3/36408/9788483013380.pdf\n" << endl;
        cout << "Link del PDF 3: https://alfabetizaciondigital.fundacionesplai.org/pluginfile.php/9629/mod_resource/content/1/Ejercicios%20Python%20-%20con%20soluciones.pdf\n"<<endl; 
    }
};

#endif // PROGRAMACION_H