/* Unit 3.
   Author: Gabriel Hernández Rivera
*/
// ano%400==0 || ano%4==0 && ano%100!==0) (anno) :1,0, True, false Fucion isBisiesto(2002)
#include <iostream>
using namespace std;

bool esbisiesto(int ano)
{
    bool r = true;
    r = ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0;
    return r;
}

int main()
{
    cout << esbisiesto(2010) << endl;
    return 0;
}
