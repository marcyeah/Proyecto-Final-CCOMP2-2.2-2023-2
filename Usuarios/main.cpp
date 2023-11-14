#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

#include "Aviso.h"
#include "Cesar.h"
#include "Estudiante.h"
#include "Foro.h"
#include "Profesor.h"
#include "Recursos.h"
#include "Usuario.h"

using namespace std;

unordered_map<string, string>Identidad;

string Extraer(int, char);
string Correo(int);
void Datos();
void Registrarse();
bool Iniciar() {
    string correo, contra;
    cout << "Ingrese su correo electrónico: ";
    cin >> correo;

    auto i = Identidad.find(correo);
    if (i != Identidad.end()) {
        cout << "Usuario encontrado. Ingrese su contraseña: ";
        cin >> contra;
        if (i -> second == contra) {
            cout << "Inicio de sesión exitoso.\n";
            return true;
        } else {
            cout << "Contraseña incorrecta.\n";
            return false;
        }
    } else {
        cout << "Error: Correo electrónico no registrado.\n";
        return false;
    }
}

int main() {
    Recursos recursos;
    Foro foro;

    Datos();

    char opcion;

    do {
        cout << "¿Desea registrarse (R) o iniciar sesión (I)? ";
        cin >> opcion;

        if (opcion == 'R' || opcion == 'r') {
            Registrarse();
        } else if (opcion == 'I' || opcion == 'i') {
            Iniciar();
        } else if (opcion == 'S' || opcion == 's') {
            break;
        } else {
            cout << "Intente nuevamente.\n";
        }
    } while (opcion != 'I' && opcion != 'i');

    fflush(stdin);

    string carrera;
    cout << "Ingrese su carrera: ";
    getline(cin, carrera);
    fflush(stdin);

    string titulo;
    cout << "Ingrese el titulo: ";
    getline(cin, titulo);
    fflush(stdin);

    string mensaje;
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    string correo, nombre;

    correo = Extraer(0, ' ');
    nombre = Extraer(0, '@');

    Aviso aviso1(correo, carrera, nombre, titulo, mensaje);

    foro.AgregarAviso(aviso1);

    int opc;
    int cursos;

    fflush(stdin);

    cout << "Elige una opcion: \nOpcion 1: Recursos\nOpcion 2: Mostrar avisos\nEscoja opcion: ";
    cin >> opc;
    
    fflush(stdin);
    
    switch(opc){
        case 1:
            while(true){
                recursos.mostrar_cursos();
                cout << "Elije un curso (1-" << recursos.obtenerCursosDisponibles()<< "): ";
                cin >> cursos;
                if(cursos < 1 || cursos > recursos.obtenerCursosDisponibles()){
                    cout << "Curso no valido, intente de nuevo." << endl;
                }
                else{
                    break;
                }
            }
            recursos.escoger_cursos(cursos);
            break;

        case 2:
            cout << "\nAvisos en el foro:" << endl;
            foro.MostrarAvisos();
            break;
        
        default:
            cout << "El numero que usted a elegido, sobrepasa el rango de opciones disponibles" << endl;
            break;
    }

    return 0;
}

void Datos() {
    ifstream lector("usuarios.txt");
    if (lector.is_open()) {
        string correo, contra;
        while (lector >> correo >> contra) {
            Identidad[correo] = contra;
        }
        lector.close();
    }
}

void Registrarse() {
    string correo, contra;
    cout << "Ingrese su nuevo correo electrónico: ";
    cin >> correo;

    cout << "Ingrese su nueva contraseña: ";
    cin >> contra;

    
    Identidad[correo] = contra;
    cout << "Usuario registrado correctamente.\n";


    ofstream lector("usuarios.txt", ios::app); 
    if (lector.is_open()) {
        lector << correo << " " << contra << endl;
        lector.close();
    }
}

string Extraer(int n, char c) {
    int inicio{0};
    int fin{0};
    string cad;
    
    while(fin = Correo(n).find(c, inicio), fin >= 0){
        cad = Correo(n).substr(inicio, fin - inicio);
        inicio = fin + 1;
    }
    return cad;
}

string Correo(int max) {
    int cont{0};
    ifstream archivo("usuarios.txt");
    string correo;

    while(getline(archivo, correo)) {
        if(max == cont) {
            return correo;
        }
        cont++;
    }
}