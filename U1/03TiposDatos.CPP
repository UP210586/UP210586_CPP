/*Unidad 1. Tipos de datos
    Autor: Gabriel Hernández Rivera
    Descripción: Muestra los diferentes tipos de datos en C++
    */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int unsigned entero = -2147483647;
    float flotante = 3.4e38;
    double grande = 2.565465654654;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " <<entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl;

    getchar();
    return 0;
}

