#include <iostream>
using namespace std;
/* 
 * У любого составного числа есть собственный (то есть не равный 1) делитель, 
 * не превосходящий квадратного корня из числа. Это позволит сократить сложность алгоритма.
*/

int main()
{
    int chislo, d = 2;
    bool prostoe = true;
    while (cin >> chislo)
    {
        if (chislo == 0) break;
        while (d * d <= chislo)
        if (chislo % d != 0)
        d += 1;
        else
        {
            prostoe = false;
            break;
        }
    if (prostoe  == true)
        cout << "Простое\n";
    prostoe = true;
    d = 2;
    }
	return 0;
}
