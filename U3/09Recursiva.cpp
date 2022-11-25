/* Unit 3.
   Author: Gabriel Hernández Rivera
*/
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n, r;
    cout << "Escribe un numero : ";
    cin >> n;
    r = factorial(n);
    cout << n << "! = " << r << endl;
}

int factorial(int n)
{
    if (n < 0)
        return 0;
    else if (n > 1)
        return n * factorial(n - 1);
    return 1;
}