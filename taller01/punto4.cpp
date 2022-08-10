/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 4
****************************/

#include <iostream>

int main() {
    int x = 0, y = 0;

    for (x = 6; x > 0; x -= 2) 
        for (y = 0; y < 2; y++)
            std::cout << "x - y = " << x - y << std::endl;

    return 0;
}