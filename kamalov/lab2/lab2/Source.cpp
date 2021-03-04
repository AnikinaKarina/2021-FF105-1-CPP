//Камалов Алексей ФФ-105/1 Лабораторная работа №2

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, A, B, C, x, F;
	float x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4, area;

	cout << "Введите а: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	if ((a > 0 && b > 0 && c > 0)) {
		cout << "Все числа положительны" << endl;
	}

	if ((a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0)) {
		cout << "Одно число положительно" << endl;
	}

	if ((a > 0 && b > 0 && c < 0) || (a > 0 && b < 0 && c > 0) || (a < 0 && b > 0 && c > 0)) {
		cout << "Два числа положительны" << endl;
	}

	if (a < 0 && b < 0 && c < 0) {
		cout << "Нет положительных чисел" << endl;
	}

	cout << "Введите a: " << endl;
	cin >> A;
	cout << "Введите b: " << endl;
	cin >> B;
	cout << "Введите c: " << endl;
	cin >> C;

	if ((abs(A - B)) < (abs(A - C))) {
		cout << "Число 'b' ближе к числу 'a', чем 'c'" << endl;
	}

	if ((abs(A - B)) > (abs(A - C))) {
		cout << "Число 'c' ближе к числу 'a', чем 'b'" << endl;
	}
	if ((abs(A - B)) == (abs(A - C))) {
		cout << "Оба числа на одинаковом расстоянии от 'a'" << endl;
	}

	cout << "Введите 'x' в первом координатном угле: " << endl;
	cin >> x_1;
	cout << "Введите 'y' в первом координатном угле: " << endl;
	cin >> y_1;
	cout << "Введите 'x' во втором координатном угле: " << endl;
	cin >> x_2;
	cout << "Введите 'y' во втором координатном угле: " << endl;
	cin >> y_2;
	cout << "Введите 'x' в третьем координатном угле: " << endl;
	cin >> x_3;
	cout << "Введите 'y' в третьем координатном угле: " << endl;
	cin >> y_3;
	cout << "Введите 'x' в четвёртом координатном угле: " << endl;
	cin >> x_4;
	cout << "Введите 'y' в четвёртом координатном угле: " << endl;
	cin >> y_4;

	area = (0 + x_1) * (0 + y_1);
	cout << "Площадь фигуры в первом координатном угле = " << area << endl;

	cout << "Введите x: " << endl;
	cin >> x;

	if (x <= 2)
		F = ((pow(x, 2)) + (4 * x) + 5);
	if (x > 2)
		F = (1 / ((pow(x, 2) + (4 * x) + 5)));

	cout << "F(x) = " << F << endl;

	return 0;
}