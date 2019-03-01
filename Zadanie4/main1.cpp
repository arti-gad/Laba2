#include <iostream>
using namespace std;
/* 
 * У любого составного числа есть собственный (то есть не равный 1) делитель, 
 * не превосходящий квадратного корня из числа. Это позволит сократить сложность алгоритма.
*/


int main()
{
    int chislo, d = 2;
    cin >> chislo;
    while (d * d <= chislo && chislo % d != 0)
        d += 1;
    if (chislo % d != 0)
        cout << "Да\n";
    else
        cout << "Нет\n";
	return 0;
}
