#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    setlocale(0, "");
    cout << "введите х=";
    cin >> x; 
    if (x == 0 || x == sqrt(15) || x == -sqrt(15)) cout << "деление на ноль";
    else cout << abs(pow(x, 2) - pow(x, 3)) - 7 * x / (pow(x, 3) - 15 * x);
    return 0;
}
