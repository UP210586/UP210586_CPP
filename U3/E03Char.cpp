#include <iostream>
using namespace std;

char *camelloC(char *x)
{
    int i = 0;
    while (x[i] != '\0')
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
        i++;
    }
    return x;
}
int main()
{

    char texto[20] = "UnI";
    char* txt;
    txt = camelloC(texto);
    cout << txt << endl;
}