/*Objetivo: While mientras True
 */

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    char opcion = 's';
    cout << "Tabla de Multiplicar " << endl;

    while (opcion == 's')
    {
        cout << "Número: ";
        cin >> n;
        // Proceso
        i = 1;
        do
        {
            cout << n << " X " << i << " = " << n * i << endl;
            i++;
        } while (i <= 10);

        cout << "¿Deseas otro número?(s/n)" << endl;
        cin >> opcion;
    }
    cout << "Hecho" << endl;
    return 0;
}
