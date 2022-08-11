/***************************
 * Fecha: 10-08-2022
 * Autor: Santiago Gutiérrez
 * Materia: HPC-2
 * Tema: Primer taller de ejercicios
 * Programa: Punto 8
****************************/

#include <iostream>

bool verifyDate (int dia, int mes, int anio) {
    if (dia > 0 && dia < 32
    && mes > 0 && mes < 13
    && anio > 999 && anio < 2023) return true;
    return false;
}

int calculationTarot (int dia, int mes, int anio) {
    int sumaInicial, sumaParcial, sumaTotal;

    sumaInicial = dia + mes + anio;

    sumaParcial = (sumaInicial / 1000) + ((sumaInicial / 100) % 10) + ((sumaInicial / 10) % 10);
    
    sumaTotal = (sumaParcial / 10) + (sumaParcial % 10);

    return sumaTotal;
}

int main() {
    int dia, mes, anio;

    do {
        std::cout << "Ingrese su fecha de nacimiento como dia mes año\nEjemplo 26 08 2000" << std::endl;
        std::cin >> dia >> mes >> anio;
    } while (!verifyDate(dia, mes, anio));

    std::cout << "Su número de Tarot es: " << calculationTarot(dia, mes, anio) << std::endl;

    return 0;
}