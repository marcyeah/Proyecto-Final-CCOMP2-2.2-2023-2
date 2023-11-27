#ifndef MATEMATICA_H
#define MATEMATICA_H

#include <iostream>
#include <string>
#include <vector>
#include "Cursos.h"
using namespace std;

// Clase derivada para Matemáticas
class Matematicas : public Cursos {
public:
    Matematicas() : Cursos("Matemáticas") {}

private:
//Uso de polimorfismo en los metodos
    void mostrar_libros_de_texto() const override {
        cout << "\nUsted escogio libros de texto:" << endl;
        cout << "Libros de matematica." << endl;
        cout << "\nlibro 1: algebra-y-trigonometria-7ma-edicion-sullivan.pdf" <<endl;
        cout << "Link del libro: https://blog.utp.edu.co/matematicas1a457/files/2019/02/algebra-y-trigonometria-7ma-edicion-sullivan.pdf\n" << endl;
        cout << "Libro 2: Álgebra de Baldor.pdf" << endl;
        cout << "Link del libro: https://guao.org/sites/default/files/biblioteca/%C3%81lgebra%20de%20Baldor.pdf\n" << endl;
        cout << "Lbro 3: Algebra lineal Daniel Hernandez Ruiperez vol1" <<endl;
        cout << "Link del libro: https://todomatematicas3.files.wordpress.com/2020/02/algebralinealvol10ny.pdf\n"<< endl;
    }

    void mostrar_videos_en_linea() const override {
        cout << "\nUsted escogio videos en linea:" << endl;
        cout << "\nVideos en Linea." << endl;
        cout << "Canal recomendado: Profe Julio" << endl;
        cout << "Link del canal: https://www.youtube.com/user/julioprofe\n" << endl;
        cout << "Canal recomendado 2: Matematica Profe Alex" << endl;
        cout << "Link del canal: https://www.youtube.com/channel/UCanMxWvOoiwtjLYm08Bo8QQ\n" << endl;
        cout << "Canal recomendado 3: MateFacil" << endl;
        cout << "Link del canal: https://www.youtube.com/@MateFacilYT\n" << endl; 
    }

    void mostrar_ejercicios_practicos() const override {
        cout << "\nUsted escogio ejercicios practicos:" << endl;
        cout << "\nEjercicios practicos. Aqui hay algunos link de PDFs para que practiques esta materia." << endl;
        cout << "Link del PDF 1: https://www.scm.org.co/PGA/100-problemas-matematicas.pdf\n" << endl;
        cout << "Link del PDF 2: https://riunet.upv.es/bitstream/handle/10251/123423/Agud%3BMora%20-%20Matem%C3%A1ticas%20b%C3%A1sicas%20para%20ingenier%C3%ADas.%20Ejercicios%20resueltos.pdf?sequence=1\n" << endl;
        cout << "Link del PDF 3: https://repositorio.uned.ac.cr/bitstream/handle/120809/1375/50287%20Matematicas%20para%20informatica.pdf?sequence=1&isAllowed=y\n"<<endl;  
    }
};

#endif // MATEMATICA_H


