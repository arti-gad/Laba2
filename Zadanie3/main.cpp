#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0;
    while (cin >> a)
        {
            if (a == 0) break;
            if (a > 0)
                sum += a;
        }
    cout << sum << endl;
	return 0;
}
