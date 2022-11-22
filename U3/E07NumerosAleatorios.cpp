#include <iostream>
using namespace std;
#define F 2
#define C 3

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n;

    int matriz[F][C];
    int matrizT[C][F];
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            n = 21 + rand() % (10);
            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i] = matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Transpuesta" << endl;
    cout << endl;
    for (int j = 0; j < C; j++)
    {
        for (int i = 0; i < F; i++)
        {
            cout << matrizT[j][i] << "\t";
        }
        cout << endl;
    }

    return 0;
}