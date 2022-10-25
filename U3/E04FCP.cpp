#include <iostream>
using namespace std;

long int factorial(int n);
long int permutacion(int n, int r);
long int combinaciones(int n, int r);

int main()
{
    /*
    long int r;
    r = factorial(0);
    cout << r << endl;
    return 0;


    long int p;
    p = permutacion(5, 2);
    cout << p << endl;
    return 0;
    */
    long int co;
    co = combinaciones(5, 2);
    cout << co << endl;
    return 0;
}
long int factorial(int n)
{
    long int ft = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        ft = ft * i;
    }

    return ft;
}
long int permutacion(int n, int r)
{
    long int p;
    p = factorial(n) / factorial(n - r);
    return p;
}
long int combinaciones(int n, int r)
{
    long int co;
    co = factorial(n) / ((factorial(n - r)) * factorial(r));
    return co;
}
