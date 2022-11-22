/* Unit 3.
   Author: Gabriel Hernández Rivera
*/
#include <iostream>
#include <cmath>
#include "Libro.h"

using namespace std;

int main()
{
    int i, j, n, exp = 0, signo = -1;
    float x;
    double r = 0, factorial = 1;
    cout << "Valor en radianes para sacar coseno: " << endl;
    cin >> x;
    cout << "Cuantos terminos? " << endl;
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= exp; j++)
            factorial = factorial * j;
        signo = signo * -1;
        r = r + (signo * pow(x, exp) / factorial);
        cout << r << endl;
        exp = exp + 2;
    }
    cout << "El coseno del angulo es: " << r << endl;
    return 0;
}