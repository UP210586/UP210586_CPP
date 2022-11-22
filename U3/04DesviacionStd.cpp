/* Unit 3.
   Author: Gabriel Hernández Rivera
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i;
    float p = 0.0, m = 0.0, E = 0.0, mu = 0.0;
    cout << "Cuantos datos va a ingresar? :" << endl;
    cin >> n;
    cout << "Introduce los " << n << " numeros :" << endl;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        m += num[i];
    }

    m = m / n;

    for (i = 0; i < n; i++)
    {
        E += pow(num[i] - m, 2);
    }
    p = sqrt(E / n);
    mu = sqrt(E / (n - 1));
    cout << "La media es: " << m << endl;
    cout << "La desviacion estandar de poblacion es " << p << endl;
    cout << "La desviacion estandar de una muestra es " << mu << endl;
    return 0;
}