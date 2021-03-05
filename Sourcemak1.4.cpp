#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;

	if (x >= 3 && y >= 3 && x <= 6 && y <= 6) 
	{
		if (x / y < 1 && x * x + y * y <= 36)
			cout << "true";
		else
			cout << "false";
		if (x >= 3 && y <= 3 && x <= 6 && y >= 0) 
			cout << "true";
		else
			cout << "false";
	}

	else if (x <= 3 && y >= 3 && x >= 0 && y <= 6) 
	{
		if (x <= 3 && y >= 3 && x >= 0 && y <= 6)
			cout << "true";
		else
			cout << "false";
	}

	return 0;
}