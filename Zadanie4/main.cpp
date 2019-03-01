#include <iostream>
#include <math.h>
using namespace std;
/* 
 * У любого составного числа есть собственный (то есть не равный 1) делитель, 
 * не превосходящий квадратного корня из числа. Это позволит сократить сложность алгоритма.
*/


int main()
{
    int chislo;
    bool prostoe = true;
    cin >> chislo;
    for(long long i = 2; i <= sqrt(chislo); i++)
    {
        if(chislo%i == 0)
        {
            prostoe = false;
            break;
        }
    }
    if (prostoe == true)
        cout << "Да\n";
    else
        cout << "Нет\n";
	return 0;
}
