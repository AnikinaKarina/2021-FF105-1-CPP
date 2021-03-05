#include <iostream>

using namespace std;

int main(void)
{
	int C;
	float S(0), pi = 3.14;
	cout << "C = ";
	cin >> C;
	S = C * C / (4 * pi);
	cout << "S = " << S;
	return 0;
}