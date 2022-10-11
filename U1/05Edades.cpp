/* Unidad 2.
   Autor: Gabriel Hernández Rivera
   Descripción: Definir la etapa de la persona
         [1..150] Validación
         [1...30] Primera edad
         [31..60] Segunda Edad
         [61..90] Tercera Edad
         [91....] Horas Extra
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int edad;
   cout << "Dame tu edad ";
   cin >> edad;

   if (edad >= 1 && edad <= 150)
   {
      if (edad <= 30)
      {
         cout << "Primera Edad" << endl;
      }
      else if (edad >= 31 && edad <= 60)
      {
         cout << "Segunda Edad" << endl;
      }
      else if (edad >= 61 && edad <= 90)
      {
         cout << "Tercera Edad" << endl;
      }
      else
      {
         cout << "Horas Extra" << endl;
      }
   }
   else
   {
      cout << "El rango es invalido" << endl;
   }
   getchar();
   return 0;
}