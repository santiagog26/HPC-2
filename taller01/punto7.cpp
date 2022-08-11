/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 7
****************************/

#include <iostream>

int main() {
    int b;
    double x, y;
    int a = 0;
    double resultado = 0;

    std::cout << "\n*********************************" << std::endl;
    std::cout << "La función a evaluar es \n"
        << "sumatoria de 0 a b de 1 sobre x + ay" << std::endl;
    std::cout << "*********************************\n" << std::endl;

    std::cout << "Ingrese hasta qué número quiero realizar la sumatoria (b)" << std::endl;
    std::cin >> b;

    std::cout << "Ingrese los valores para 'x' y 'y' separados por un espacio (ejemplo: 12 10)" << std::endl;
    std::cin >> x >> y;

    do{
        resultado += 1 / (x + a * y);
        a++;
    } while (a <= b);

    std::cout << "El resultado de la sumatoria es " << resultado << std::endl;

    return 0;
}