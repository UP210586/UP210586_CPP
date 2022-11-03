#include <iostream>
using namespace std;
/*
void imprimirA(intA[][], int f, int co)
{
    cout<<"Matriz A"<< endl;
    
    
}
*/
int main(int argc, char const *argv[])
{
    int f;
    cout << "¿Cuántas filas tiene la matriz? " << endl;
    cin >> f;
    int co;
    cout << "¿Cuántas columnas tiene la matriz? " << endl;
    cin >> co;
    int matriz[f][co];

    int contador = 1;

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < co; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
        cout << endl;
    }

    // imprimir
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < co; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}