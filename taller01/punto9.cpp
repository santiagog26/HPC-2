/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 9
****************************/

#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
    srand(time(0));
    int numeroFilas, aux, aux2, i, j, numeroPrint;
    int numeroInicio = 1;

    numeroFilas = 11 + rand() % (20- 11);
    aux = 1;
    aux2 = numeroFilas - 1;

    while (aux <= numeroFilas) {
        if (numeroInicio == 10) numeroInicio = 0;
        numeroPrint = numeroInicio;

        for (i = 0; i < aux2; i++) {
            std::cout << "  ";
        }

        for (j = aux; j < aux * 2; j++) {
            std::cout << " " << numeroPrint;
            numeroPrint++;
            if (numeroPrint == 10) numeroPrint = 0;
        }

        numeroPrint--;

        if (aux != 1)
        for (j = aux * 2 - 1; j > aux; j--) {
            numeroPrint--;
            if (numeroPrint < 0) numeroPrint = 9;
            std::cout << " " << numeroPrint;
        }


        std::cout << std::endl;

        aux++;
        aux2--;
        numeroInicio++;
    }

    

    return 0;
}