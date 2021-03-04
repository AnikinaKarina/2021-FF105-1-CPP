#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main(void)

{
	float X, Y, result, x_1, x_2, a, b, c, D, M_1, M_2, N_1, N_2, M, N, x, y;
	std::cout << "Enter X: " << std::endl; // просим ввести значение X
	std::cin >> X; // получаем значение X
	std::cout << "Enter Y: " << std::endl; // просим ввести значение Y
	std::cin >> Y; // получаем значение Y
	result = (((pow(2, -X) - cos(X)) + sin(2 * X * Y)));
	std::cout << "Result is " << result << std::endl; // выдаём ответ

	std::cout << "Enter a: " << std::endl; // просим ввести значение a
	std::cin >> a; // получаем значение a
	std::cout << "Enter b: " << std::endl; // просим ввести значение b
	std::cin >> b; // получаем значение b
	std::cout << "Enter c: " << std::endl; // просим ввести значение c
	std::cin >> c; // получаем значение c
	D = ((pow(b, 2)) - 4 * a * c);
	std::cout << "D= " << D << std::endl; // выдаём значение дискриминанта
	x_1 = ((-b - (sqrt(D))) / (2 * a));
	std::cout << "x1= " << x_1 << std::endl; // выдаём значение первого корня уравнения
	x_2 = ((-b + (sqrt(D))) / (2 * a));
	std::cout << "x2= " << x_2 << std::endl; // выдаём значение второго корня уравнения
	
	std::cout << "Enter M1: " << std::endl; // просим ввести значение точки M1
	std::cin >> M_1; // получаем значение M1
	std::cout << "Enter N1: " << std::endl; // просим ввести значение точки N1
	std::cin >> N_1; // получаем значение N1
	std::cout << "Enter M2: " << std::endl; // просим ввести значение точки M2
	std::cin >> M_2; // получаем значение M2
	std::cout << "Enter N2: " << std::endl; // просим ввести значение точки N2
	std::cin >> N_2; // получаем значение N2
	std::cout << "Enter M: " << std::endl; // просим ввести значение точки M
	std::cin >> M; // получаем значение M
	std::cout << "Enter N: " << std::endl; // просим ввести значение точки N
	std::cin >> N; // получаем значение N
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
    
	std::cout << "Enter x: " << std::endl; // просим ввести значение точки x
	std::cin >> x; // получаем значение x
	std::cout << "Enter y: " << std::endl; // просим ввести значение точки y
	std::cin >> y; // получаем значение y
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





