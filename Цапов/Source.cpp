#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int N;
	do {
		cin >> N;
		if (int(sqrt(N)) * int(sqrt(N)) == N) cout << '1' << endl;
		else cout << '0' << endl;
	} while (N);

	return 0;
}