#include <iostream>
using std::cout;
using std::cin;
 
void main()
{
    double x, y;
    cout << "Enter X and Y: ";
    cin >> x >> y;
    if (((y >=-6) && (y <=6) && (y/x >1)) && (x*x+y*y <=36)) 
        cout << "false";
    else
        cout << "true";
}
