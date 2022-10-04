#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int sp = 0;
    int si = 0;
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sp = sp + i;
        }
        else
        {
            si = si + i;
        }
    }
    printf("La suma de los numeros pares es %d \n", sp);
    printf("La suma de los numeros impares es %d \n", si);
    suma = sp+si;
    printf("La suma de todos los números es %d \n",suma);
    return 0;
}