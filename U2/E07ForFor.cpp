/*Objetivo: For Anidados
            Tablas del 1 al 10
 */

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Tablas de Multiplicar " << endl;

    for (n = 1; n <= 10; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            cout << n << " X " << i << " = " << n * i << endl;
        }
        cout << endl;
    }
    cout << "Hecho" << endl;
;
}
