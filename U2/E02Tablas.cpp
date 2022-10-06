/* Unidad 2.
   Autor: Gabriel Hernández Rivera
   Fecha: 04/10/2022
   Descripción: Tabla de multiplicar con ciclos

*/
#include<iostream>
using namespace std;
int main (){
    /* ciclo for */
    
    int n;
    cout << "Dame un número del 1-10 " << endl;
    cin >> n;
    int r = 0;
  
    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl;
    }

}