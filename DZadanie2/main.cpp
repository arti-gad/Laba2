#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int x, otr = 0, zero = 0, sum = 0;
    for (int i = 1; i <= 15; i++)
    {
        cin >> x;
        if (x < 0) ++otr;
        else if (x == 0) ++zero;
        else if (x > 0) sum += x;
    }
    cout << "Количество отрицальных чисел: " << otr << endl;
    cout << "Количество нулей: " << otr << endl;
    cout << "Сумма положительных: " << sum << endl;
	return 0;
}
