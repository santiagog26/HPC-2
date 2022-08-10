/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 5
****************************/

#include <iostream>

void fnx(int x) {
    if (x) std::cout << "x = " << x << std::endl;
}

int main() {
    int i, a = 1234;

    for (i = 0; i < 4; i++)
        fnx(a = a/10);

    return 0;
}