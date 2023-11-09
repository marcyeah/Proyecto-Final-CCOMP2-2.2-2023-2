#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Recursos{
    public:
    Recursos(){
        cursos_disponibles = {"Matematicas", "Estructuras Discretas", "Programación de Videojuegos"};
    }
    //funcion para mostrar los cursos disponibles que hay
    void mostrar_cursos(){
        cout << "Cursos disponibles: " << endl;
        for (size_t i = 0; i < cursos_disponibles.size();i++){
            cout << i+1 << ". " << cursos_disponibles[i] << endl;
        }
    }
    size_t obtenerCursosDisponibles() {
        return cursos_disponibles.size(); 
    }

    //funcion para que el usuario elija recursos para un curso
    void escoger_cursos(int indice){
        if(indice >= 1 && indice <= cursos_disponibles.size()){
            cout << "Recursos disponibles para el curso " << cursos_disponibles[indice-1] << ":\n";
            cout << "1. Libro de texto" << endl;
            cout << "2. Videos en línea" << endl;
            cout << "3. Ejercicios Practicos" << endl;
        }
        else{
            cout <<"Curso no válido." << endl;
        }
    }

    private:
        vector<string> cursos_disponibles; 


};