/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 6
****************************/

#include <iostream>

void printMult5(int a, int b) {
    int i;

    for (i = a; i <= b; i++)
        if (i % 5 == 0) std::cout << i << std::endl;
}

bool minorA(int a, int b) {
    if (a < b)
        return true;
    return false;
}

bool positiveInt(int a, int b) {
    if (a >= 0 && b >= 0)
        return true;
    return false;
}

int main() {
    int a, b, aux;

    std::cout << "Bienvenido, recuerda que los dos números deben ser positivos" << std::endl;

    do {
        std::cout << "Ingrese un número para a: " << std::endl;
        std::cin >> a;
        std::cout << "Ingrese un número para b: " << std::endl;
        std::cin >> b;
    } while (!positiveInt(a, b));

    if (!minorA(a, b)){
        aux = a;
        a = b;
        b = aux;
    }

    std::cout << "Los números múltiplos de 5 entre " << a << " y " << b << " son:" << std::endl;
    printMult5(a, b);

    return 0;
}