#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, contador;

    char texto1[50] = "Hola Amigo Mío";
    char texto2[50] = {'A', 'D', 'I', 'O', 'S', '\0'};

    i = 0;
    while (texto2[i] != '\0')
    {
        texto2[i] = tolower(texto2[i]);
        cout << texto2[i] << "\t";
        i++;
    }
    cout << endl
         << endl;

    i = 0;
    contador = 0;
    while (texto1[i] != '\0')
    {
        if (isspace(texto1[i]))
        {
            contador = contador + 1;
        }
        else if (islower(texto1[i]))
        {
        }
    }

    return 0;
}