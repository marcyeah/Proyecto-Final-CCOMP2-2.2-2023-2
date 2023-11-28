#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include <vector>

#include "Cypher.h"
#include "Estructuras_Discretas.h"
#include "Estudiante.h"
#include "Foro.h"
#include "Matematica.h"
#include "Profesor.h"
#include "Programacion.h"
#include "Cursos.h"
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
        Cypher cript(contra);
        if (i -> second == cript.Cifrado()) {
            cout << "Inicio de sesión exitoso.\n";
            cout << endl;
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
    Matematicas matematicas;
    Estructuras Discreta;
    Programacion Progra;
    vector<Cursos*> cursos;

    cursos.push_back(new Matematicas());
    cursos.push_back(new Estructuras());
    cursos.push_back(new Programacion()); 
    
    Foro foro;

    Datos();

    char opcion;

    do {
        bool a;
        cout << "¿Desea registrarse (R) o iniciar sesión (I)? ";
        cin >> opcion;

        if (opcion == 'R' || opcion == 'r') {
            Registrarse();
        } else if (opcion == 'I' || opcion == 'i') {
            do {
                int cont{0};
                a = Iniciar();
                if(cont > 3){
                    return 0;
                }
                cont++;
            } while (a == false);
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
    cin.clear();

    string titulo;
    cout << "Ingrese el título: ";
    getline(cin, titulo);
    cin.clear();

    string mensaje;
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);
    cout << endl;

    string correo, nombre;

    correo = Extraer(0, ' ');
    nombre = Extraer(0, '@');

    Usuario usuario(correo, carrera, nombre);

    foro.AgregarAviso();

    int opc;
    int opcion_cursos;
    int opc_cursos;

    cin.clear();

    cout << "Elige una opción: \nOpción 1: Recursos\nOpción 2: Mostrar avisos\n";
    cin >> opc;
    
    cin.clear();
    
    switch(opc){
        case 1:
            while(true){
                cout << endl;
                for(int i{0}; i < cursos.size(); i++){
                    cursos[i] -> mostrar_nombre_curso();
                }
                cout << "Seleccione una opción (1-" << cursos.size()<<"): ";
                cin >> opcion_cursos;
                if (opcion_cursos < 1 || opcion_cursos > cursos.size()){ 
                    cout << "\nCurso no disponible, Intente de nuevo." << endl;
                }
                else{
                    int comprobar = true;
                    while (comprobar){
                        cursos[opcion_cursos] -> escoger_recursos(opcion_cursos); //puntero que accede al metodo escoger recursos
                        cout << "\nEscoja un recurso educativo: ";
                        cin >> opc_cursos;
                        if(opc_cursos < 1 || opc_cursos > 3){
                            cout << "\nRecurso no valido, Intente de nuevo.\n" <<endl;
                        }
                        else{
                            if (opc_cursos == 1){
                                if(opcion_cursos == 1){
                                    matematicas.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 2){
                                    Discreta.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 3){
                                    Progra.mostrar_recursos_educativos(opc_cursos);
                                }
                                break;
                            }
                            else if (opc_cursos == 2){
                                if(opcion_cursos == 1){
                                    matematicas.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 2){
                                    Discreta.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 3){
                                    Progra.mostrar_recursos_educativos(opc_cursos);
                                }
                                break;
                            }
                            else{
                                if(opcion_cursos == 1){
                                    matematicas.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 2){
                                    Discreta.mostrar_recursos_educativos(opc_cursos);
                                }
                                else if (opcion_cursos == 3){
                                    Progra.mostrar_recursos_educativos(opc_cursos);
                                }
                                break;
                            } 
                        }      
                    }
                    break; 
                }
            }

        case 2:
            cout << "\nAvisos en el foro:" << endl;
            foro.MostrarAvisos();
            usuario.MostrarAviso(titulo, mensaje);
            break;
        
        default:
            cout << "El número que usted ha elegido, sobrepasa el rango de opciones disponibles." << endl;
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

    Cypher cript(contra);
    
    Identidad[correo] = contra;
    cout << "Usuario registrado correctamente.\n";


    ofstream lector("usuarios.txt", ios::app); 
    if (lector.is_open()) {
        lector << correo << " " << cript.Cifrado() << endl;
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