#ifndef FORO_H
#define FORO_H

#include <vector>
#include <iostream>

class Foro {
    public:
        void AgregarAviso() {
            cont++;
        }
        void MostrarAvisos() {
            for (int i{1}; i < cont; i++) {
                std::cout << "-------------------" << std::endl;
            }
        }

    private:
        int cont{1};
};

#endif
