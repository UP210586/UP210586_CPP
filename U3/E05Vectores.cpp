#include <iostream>
using namespace std;

int menorV(int x[], int N)
{
    int menor = x[0];
    for (int i = 0; i < N; i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }

    return menor;
}

int mayor2(int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y;
    return mayor;
}

int main()
{
    int n = 5;
    int cal[] = {10, 9, 8, 7, 6};

    int menor = menorV(cal, 5);
    int mayor = mayor2(5,10);

    cout << "Menor = " << menor << endl;
    cout << "Mayor = " << mayor << endl;
    /*
    int cal2[] = {10, 9, 8, 7, 6};
    int n = 5;
    int total = 0;

    int meses [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < n; i++)
    {
        total += cal2[i];
    }
    int promedio = total / n;

    cout << promedio << endl;
    */
    return 0;
}