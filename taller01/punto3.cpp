/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 3
****************************/

#include <iostream>

int main() {
    int x = 0;

    for (x = 'a'; x <= 'z'; x += 10) {
        std::cout << "x = " << x << std::endl;
    }

    return 0;
}