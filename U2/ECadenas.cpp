#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string cadena = "universidad";
    char texto[20] = "politecnica";
    int i = 0;
    int longitud = cadena.length();
    for (int i = 0; i < longitud; i++)
    {
        /* code */
        cout << cadena[i] << " ";
    }
    cout<<endl;
    i = 0;
    while (texto[i] != '\0')
    {
        texto[i]=tolower(texto[i]);
        cout << texto[i] <<" ";
        i++;
    }
    for (int i = 0; i < 30; i++)
    {
        cout << texto[i] <<" ";
    }
    if (isalpha(texto[0]))
    {
        /* code */
    }
    

    cout << "...Hecho" << endl;
    return 0;
}