#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main(void)

{
	float X, Y, result, x_1, x_2, a, b, c, D, M_1, M_2, N_1, N_2, M, N, x, y;
	std::cout << "Enter X: " << std::endl; // ������ ������ �������� X
	std::cin >> X; // �������� �������� X
	std::cout << "Enter Y: " << std::endl; // ������ ������ �������� Y
	std::cin >> Y; // �������� �������� Y
	result = (((pow(2, -X) - cos(X)) + sin(2 * X * Y)));
	std::cout << "Result is " << result << std::endl; // ����� �����

	std::cout << "Enter a: " << std::endl; // ������ ������ �������� a
	std::cin >> a; // �������� �������� a
	std::cout << "Enter b: " << std::endl; // ������ ������ �������� b
	std::cin >> b; // �������� �������� b
	std::cout << "Enter c: " << std::endl; // ������ ������ �������� c
	std::cin >> c; // �������� �������� c
	D = ((pow(b, 2)) - 4 * a * c);
	std::cout << "D= " << D << std::endl; // ����� �������� �������������
	x_1 = ((-b - (sqrt(D))) / (2 * a));
	std::cout << "x1= " << x_1 << std::endl; // ����� �������� ������� ����� ���������
	x_2 = ((-b + (sqrt(D))) / (2 * a));
	std::cout << "x2= " << x_2 << std::endl; // ����� �������� ������� ����� ���������
	
	std::cout << "Enter M1: " << std::endl; // ������ ������ �������� ����� M1
	std::cin >> M_1; // �������� �������� M1
	std::cout << "Enter N1: " << std::endl; // ������ ������ �������� ����� N1
	std::cin >> N_1; // �������� �������� N1
	std::cout << "Enter M2: " << std::endl; // ������ ������ �������� ����� M2
	std::cin >> M_2; // �������� �������� M2
	std::cout << "Enter N2: " << std::endl; // ������ ������ �������� ����� N2
	std::cin >> N_2; // �������� �������� N2
	std::cout << "Enter M: " << std::endl; // ������ ������ �������� ����� M
	std::cin >> M; // �������� �������� M
	std::cout << "Enter N: " << std::endl; // ������ ������ �������� ����� N
	std::cin >> N; // �������� �������� N
	if ((M_1<=M && M_2>=M) && (N_1<=N && N_2>=N))
	{
		std::cout << "True" << std::endl;
	}
	if (M_1>M)
	{
		std::cout << "False" << std::endl;
	}
	if (M_2<M)
	{
		std::cout << "False" << std::endl;
	}
	
	if (N_1>N)
	{
		std::cout << "False" << std::endl;
	}
	if (N_2<N)
	{
		std::cout << "False" << std::endl;
	}
    
	std::cout << "Enter x: " << std::endl; // ������ ������ �������� ����� x
	std::cin >> x; // �������� �������� x
	std::cout << "Enter y: " << std::endl; // ������ ������ �������� ����� y
	std::cin >> y; // �������� �������� y
	if ((x>=((-15+y)/2) && x<=((15-y)/2)) && (y>=1 && y<=7))
	{
		std::cout << "True" << std::endl;
	}
	if (x<((-15+y)/2))
	{
		std::cout << "False" << std::endl;
	}
	if (x>((15-y)/2))
	{
		std::cout << "False" << std::endl;
	}
	if (y<1)
	{
		std::cout << "False" << std::endl;
	}
	if (y>7)
	{
		std::cout << "False" << std::endl;
	}
	return 0;

}





