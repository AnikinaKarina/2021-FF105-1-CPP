// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
	double x_2, y_2;            //1 задание
	double x_1, y_1;
	int x[4], y[4];
	double xc[2], yc[2];
	float a_1, b_1, c_1, a_2, b_2, c_2, F;

	cout << "Enter x: " << endl;
	cin >> x_2;
	cout << "Enter y: " << endl;
	cin >> y_2;
	if (x_2 > 0 && y_2 > 0)                   
		cout << "1 kvadrant" << endl;
	else
		if (x_2 < 0 && y_2 > 0)
			cout << "2 kvadrant" << endl;
	else
		if (x_2 < 0 && y_2 < 0)
			cout << "3 kvadrant" << endl;
	else
		cout << "4 kvadrant" << endl;

	for (int i = 0; i < 4; i++)            //2 задание
	{
		cout << "x" << i + 1 << " = ";
		cin >> x[i];
		cout << "y" << i + 1 << " = ";
		cin >> y[i];
	}
	xc[0] = (double)(x[0] + x[2]) / 2;
	xc[1] = (double)(x[1] + x[3]) / 2;
	yc[0] = (double)(y[0] + y[2]) / 2;
	yc[1] = (double)(y[1] + y[3]) / 2;
	if (xc[0] == xc[1] && yc[0] == yc[1])
		cout << "Paralelogram ytv" << endl;
	else
		cout << "Paralelogram ne ytv" << endl;
		
	std::cout << "Enter a1:" << std::endl;   //3 задание
	std::cin >> a_1 ;
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
	std::cout << "x = " << x_1 <<
		std::endl;
	y_1 = ((c_2 - (a_2 * x_1)) / (b_2));
	std::cout << "y = " << y_1 << std::endl;

	cout << "Enter x: " << endl;   //4 задание
	cin >> x_1;
	if (x_1 <= 7)
	{
		F = -3 * x_1 + 9;
	}
	if (x_1 > 7)
	{
		F = 1 / ((pow(x_1, 2)) + 1);
	}
	std::cout << "F = " << F << std::endl;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
