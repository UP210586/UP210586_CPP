#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

const double E = 2.718281828;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}

int sumatoria(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r = r + i;
    }
    return r;
}
double ec(int x)
{
    double y;
    y = pow(x, 2) - 8 * x + 15;
    return y;
}

double ec2(double x)
{
    return (pow(E, -x) + 4 * pow(x, 3) - 5);
}

string camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
    }
    return x;
}

int main(int argc, char const *argv[])
{
    /*
    int n = 10;
    int x = doble(5);
    x = sumatoria(n);
    cout << "La sumatoria de " << n << " es : " << x << endl;
    */

    int x;
    cout << "Dame el valor de x para la función y=x2-8x+15" << endl;
    cin >> x;
    int r;
    r = ec(x);
    cout << "El valor de y es de: " << r << endl;
    return 0;
    
    /*
    double x = 1.05151652;
    double r;
    r = ec2(x);
    cout << "El valor de y es de: " << r << endl;
    printf("%12.10f \n",r);
    return 0;
    
    string res = camello("Upa");
    cout << res << endl;
    printf("%s", camello("Upa"));
    return 0;
    */
}
