#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, f1, f2;
	cin >> x;
	f1 = x * (-2 + x * (3 - 4 * x));
	f2 = 1 + x * (2 + x * (3 + 4 * x));
	cout << f1 << endl << f2;
	return 0;

}