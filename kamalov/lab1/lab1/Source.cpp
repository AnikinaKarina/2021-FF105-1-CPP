// Камалов Алексей ФФ-105/1 Лабораторная работа №1

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int X, Y, result, a, b, c, r, x_1, y_1;
	float x, y, edge, full, cubevolume;
	bool there = true;

	cout << "Введите X: " << endl;
	cin >> X;
	cout << "Введите Y: " << endl;
	cin >> Y;
	result = ((pow((1 - tan(X)), atan(X)) + (cos(X - Y))));
	cout << "Результат: " << result << endl;

	cout << "Введите r: " << endl;
	cin >> r;
	edge = r * r;
	cout << "Площадь грани: " << edge << endl;
	full = 6 * (r * r);
	cout << "Площадь полной поверхности: " << full << endl;
	cubevolume = r * r * r;
	cout << "Объём: " << cubevolume << endl;

	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	if (a > 0 && -a == b && c > 0 || b > 0 && -b == c && a > 0 || c > 0 && -c == a && b > 0)
		cout << "Существует хотя бы одна пара взаимно противоположных чисел" << endl;
	else if (a < 0 && b < 0 && (c == -a || c == -b) || b < 0 && c < 0 && (a == -b || a == -c) || a < 0 && c < 0 && (b == -a || b == -c))
		cout << "Существует одна, либо две пары взаимно противоположных чисел" << endl;
	else
		cout << "Не существует ни одной пары взаимно противоположных чисел" << endl;

	cout << "Введите координату x: " << endl;
	cin >> x_1;
	cout << "Введите координату y: " << endl;
	cin >> y_1;

	if ((x_1 >= -5.5 && x_1 <= -3.5) && (y_1 >= 2 && y_1 <= 3.5)) {
		if (there)
		cout << "True" << endl;
	}

	if ((x_1 >= -3 && x_1 <= 3) && (y_1 >= 4 && y_1 <= 6)) {
		if (there)
		cout << "True" << endl;
	}

	if ((x_1 <= 5.5 && x_1 >= 3.5) && (y_1 >= 2 && y_1 <= 3.5)) {
		if (there)
		cout << "True" << endl;
	}

	if ((x_1 == 0) && (y_1 > +4 && y_1 <= 6)) {
		if (there)
		cout << "True" << endl;
	}

	if ((x_1 >= -1 && x_1 <= 1) && (y_1 >= 0 && y_1 <= 4)) {
		cout << "False" << endl;
	}
	else if (((x_1 < 0) || (x_1 > 0)) && ((y_1 < 2) || (y_1 > 6))) {
		cout << "False" << endl;
	}
		return 0;
}