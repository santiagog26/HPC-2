/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 2
****************************/

#include <iostream>

int main() {
    int x = 1, y = 1;

    if (x == 1)
        if (y == 0)
            x = 10;
    else
        x = -1;
    
    std::cout << "x = " << x << std::endl;

    return 0;
}