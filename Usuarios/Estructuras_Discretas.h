#ifndef ESTRUCTURAS_DISCRETAS_H
#define ESTRUCTURAS_DISCRETAS_H

#include <iostream>
#include <string>
#include <vector>
#include "Cursos.h"
using namespace std;

// Clase derivada para Matemáticas
class Estructuras : public Cursos {
public:
    Estructuras() : Cursos("Estructuras Discretas") {}

private:
//Uso de polimorfismo en los metodos
    void mostrar_libros_de_texto() const override {
        cout << "\nUsted escogio libros de texto:" << endl;
        cout << "\nLibros de Estructuras Discretas." << endl;
        cout << "libro 1: Matematicas discretas" <<endl;
        cout << "Link del libro: https://catedras.facet.unt.edu.ar/lad/wp-content/uploads/sites/93/2018/04/Matem%C3%A1ticas-Discretas-6edi-Johnsonbaugh.pdf\n" << endl;
        cout << "Libro 2: Introduccion a la matematica discreta " << endl;
        cout << "Link del libro: https://galois.azc.uam.mx/mate/LIBROS/matematicasdiscretas1.pdf\n" << endl;
        cout << "Lbro 3: Matematicas discretas con aplicaciones, 4ta Edicion " <<endl;
        cout << "Link del libro: https://bibliotecavirtual8denovpinas.files.wordpress.com/2020/08/matematicas-discretas-con-aplicaciones-epp-4ta-edicion-2.pdf\n"<< endl;
    }

    void mostrar_videos_en_linea() const override {
        cout << "\nUsted escogio videos en linea:" << endl;
        cout << "\nVideos en Linea." << endl;
        cout << "Canal recomendado: INGENIERIA INFORMATICA - UAGRM" << endl;
        cout << "Link del canal: https://www.youtube.com/@ingenieriainformatica-uagr9800\n" << endl;
        cout << "Canal recomendado 2: CodeMath " << endl;
        cout << "Link del canal: https://www.youtube.com/@codemath1 \n" << endl;
        cout << "Canal recomendado 3: OpenFING " << endl;
        cout << "Link del canal:https://www.youtube.com/@OpenFINGdirectos \n" << endl; 
    }

    void mostrar_ejercicios_practicos() const override {
        cout << "\nUsted escogio ejercicios practicos:" << endl;
        cout << "\nEjercicios practicos. Aqui hay algunos link de PDFs para que practiques esta materia." << endl;
        cout << "Link del PDF 1: https://matematica-discreta.alumnos.exa.unicen.edu.ar/e-r\n" << endl;
        cout << "Link del PDF 2: https://www.ugr.es/~anillos/textos/pdf/2006/Matem.Discreta.Eje.pdf\n" << endl;
        cout << "Link del PDF 3: https://www.cs.buap.mx/~zacarias/FZF/Lista1.pdf\n"<<endl; 
    }
};

#endif // ESTRUCTURAS_DISCRETAS_H