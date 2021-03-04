#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main(void)
{
	float x, y, A, B, X, Y, Z, a_1, b_1, c_1, a_2, b_2, c_2;
	double x_1, y_1, x_2, F;
	std::cout << "Enter x: " << std::endl; 
	std::cin >> x; 
	std::cout << "Enter y: " << std::endl; 
	std::cin >> y; 
	if (x < y)
		swap(x, y); // если x меньше y, то меняем местами
	std::cout << "x = " << x << "; y = " << y << std::endl; 

	std::cout << "Enter A:" << std::endl; 
	std::cin >> A;
	std::cout << "Enter B:" << std::endl;
	std::cin >> B;
	std::cout << "Enter X:" << std::endl;
	std::cin >> X;
	std::cout << "Enter Y:" << std::endl;
	std::cin >> Y;
	std::cout << "Enter Z:" << std::endl;
	std::cin >> Z;
	if (((X < A) && (Y < B)) || ((X < B) && (Y < A)) || ((X < A) && (Z < B)) || ((X < B) && (Z < A)) || ((Y < A) && (Z < B)) || ((Y < B) && (Z < A)))
	{
		std::cout << "The brick will go through the hole" << std::endl; // Кирпич пройдет через отверстие
	}
	else
	{
		std::cout << "Brick won't go through the hole" << std::endl; // Кирпич не пройдет через отверстие
	}

	std::cout << "Enter a1:" << std::endl;
	std::cin >> a_1;
	std::cout << "Enter b1:" << std::endl;
	std::cin >> b_1;
	std::cout << "Enter c1:" << std::endl;
	std::cin >> c_1;
	std::cout << "Enter a2:" << std::endl;
	std::cin >> a_2;
	std::cout << "Enter b2:" << std::endl;
	std::cin >> b_2;
	std::cout << "Enter c2:" << std::endl;
	std::cin >> c_2;
	x_1 = (((b_2 * c_1) - (b_1 * c_2)) / ((b_2 * a_1) - (b_1 * a_2)));
	std::cout << "x = " << x_1 << std::endl;
	y_1 = ((c_2 - (a_2 * x_1)) / (b_2));
	std::cout << "y = " << y_1 << std::endl;

	std::cout << "Enter x" << std::endl;
	std::cin >> x_2;
	if (x_2 <= 13)
	{
		F = ((pow(-x_2, 3)) + 9);
	}
	else
	std::cout << "F = " << F << std::endl;
	return 0;
}

	