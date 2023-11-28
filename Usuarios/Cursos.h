#ifndef CURSOS_H
#define CURSOS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase base
class Cursos{
public:
    Cursos(const string& nombre) : nombre_curso(nombre) {}
    
    //Funcion para mostrar recursos
    void mostrar_recursos_educativos(int opc) {
        switch (opc) {
            case 1:
                mostrar_libros_de_texto();
                break;
            case 2:
                mostrar_videos_en_linea();
                break;
            case 3:
                mostrar_ejercicios_practicos();
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    }
    //Funcion para obtener nombre del curso
    const string& obtener_nombre_curso() const {
        return nombre_curso;
    }

    //funcion para mostrar nombre del curso
    void mostrar_nombre_curso() const {
        cout << "Curso: " << nombre_curso << endl;
    }

    //Funcion para mostrar recursos
    void escoger_recursos(int indice){
        if(indice >= 1 && indice <= 3){
            cout << "\nRecursos disponibles para el curso...\n";
            cout << "1. Libro de texto" << endl;
            cout << "2. Videos en línea" << endl;
            cout << "3. Ejercicios Practicos" << endl;
            
        }
        else{
            cout <<"Curso no válido." << endl;
        }

    }

protected:
    //herencia y polimorfismo xd
    virtual void mostrar_libros_de_texto() const = 0;
    virtual void mostrar_videos_en_linea() const = 0;
    virtual void mostrar_ejercicios_practicos() const = 0;
    string nombre_curso;

};

#endif // CURSOS_H