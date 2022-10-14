#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "¿Cuáles son los números?" << endl;
    cin >> a;
    cin >> b;
    double r;
    int o;
    cout << "¿Qué operación pretendes?" << endl;
    cin >> o;

    switch (o)
    {
    case 1:
        cout << "Suma" << endl;
        r = a + b;
        cout << r << endl;
        break;
    case 2:
        cout << "Resta" << endl;
        r = a - b;
        cout << r << endl;
        break;
    case 3:
        cout << "Multiplicación" << endl;
        r = a * b;
        cout << r << endl;
        break;
    case 4:
        cout << "División" << endl;
        if (b != 0)
        {
            r = a / b;
            cout << r << endl;
        }
        else
        {
            cout << "División inválida";
        }
        break;

    default:
        cout << "Opción Inválida" << endl;
        break;
    }
    return 0;
}