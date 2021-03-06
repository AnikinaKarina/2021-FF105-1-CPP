#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, res;
    cout << "x = ";
    cin >> x;
    res = abs(x*x - x*x*x) - (7 * x) / (x*x*x - 15 * x);
    cout << "res = " << res << "\n";
    cin.get();
    return 0;
}