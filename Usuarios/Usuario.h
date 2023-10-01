#include <iostream>
#include <string>

class Usuario{
    public:
        Usuario(std::string correo, std::string carrera, std::string nombre) : cor(correo), car(carrera), nom(nombre){
        // En esta parte se debe extraer la contraseña del archivo "contrasenas.txt" y asignarla a contra
        }
        /* Esta función tiene como objetivo verificar si la contraseña y el correo ingresados coinciden con los datos del 
           usuario, y asegurarse de que los datos ingresados sean válidos
        */
        bool iniciarSesion(std::string cor, std::string con){
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

        std::string getCorreo(){
            return cor;
        }

        std::string getNombre(){
            return nom;
        }

        std::string getCarrera(){
            return car;
        }

        /* Sugerencia de Función para cambiar contraseña
        void cambiarContra(std::string correo, std::string con){

        }
        */

    private:
        std::string cor;
        std::string car;
        std::string nom;
        std::string contra;
};