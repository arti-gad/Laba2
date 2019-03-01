#include <iostream>
using namespace std;

int main()
{
    double a, sreda = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        {
        cin >> a;
        sreda += a;
        }
    cout << sreda/n << endl;
	return 0;
}