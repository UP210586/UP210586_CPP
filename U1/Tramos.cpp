/* Unidad 2.
   Autor: Gabriel Hernández Rivera
   Fecha: 27/09/2022
   Descripción: Escribir un programa que pregunte la renta anual
   y muestre por pantalla el impuesto que le corresponde para la declaración
   de la renta en un determinado país.

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int renta;
    cout << "Dame tu renta" << endl;
    cin >> renta;

    if (renta <= 1 && renta >= 10000)
    {
        cout << "5% de Impuesto" << endl;
    }
    else if (renta >= 10001 && renta <= 20000)
    {
        cout << "15% de Impuesto" << endl;
    }
    else if (renta >= 20001 && renta <= 35000)
    {
        cout << "20% de Impuesto"<< endl;
    }
    else if (renta >= 35001 && renta <= 60000)
    {
        cout << "30% de Impuesto" << endl;
    }
    else if (renta >= 60001)
    {
        cout << "45% de Impuesto" << endl;
    }
    
    getchar();
    return 0;
}