#include <iostream>
using namespace std;

int main()
{
    int chislo, a;
    bool search;
    cin >> chislo;
    while (cin >> a)
    {
        if (a == 0) break;
        if (a == chislo)
            search = true;
    }
        
    if (search == true)
        cout << "Найдено значение:" << chislo << endl;
    else
        cout << "Не найдено\n";
	return 0;
}

