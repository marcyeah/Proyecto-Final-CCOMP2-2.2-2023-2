#ifndef US_H
#define US_H
#include <string>

class Usuario{
    public:
        Usuario(std::string correo, std::string carrera, std::string nombre);
        // En esta parte se debe extraer la contraseña del archivo "contrasenas.txt" y asignarla a contra
        /* Esta función tiene como objetivo verificar si la contraseña y el correo ingresados coinciden con los datos del 
           usuario, y asegurarse de que los datos ingresados sean válidos
        */
        bool iniciarSesion(std::string cor, std::string con);

        std::string getCorreo();

        std::string getNombre();

        std::string getCarrera();

        /* Sugerencia de Función para cambiar contraseña
        void cambiarContra(std::string correo, std::string con);
        */

    protected:
        std::string cor;
        std::string car;
        std::string nom;
        std::string contra;
};

#endif