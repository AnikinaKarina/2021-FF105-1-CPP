//������� ������� ��-105/1 ������������ ������ �2

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, A, B, C, x, F;
	float x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4, area;

	cout << "������� �: " << endl;
	cin >> a;
	cout << "������� b: " << endl;
	cin >> b;
	cout << "������� c: " << endl;
	cin >> c;
	if ((a > 0 && b > 0 && c > 0)) {
		cout << "��� ����� ������������" << endl;
	}

	if ((a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0)) {
		cout << "���� ����� ������������" << endl;
	}

	if ((a > 0 && b > 0 && c < 0) || (a > 0 && b < 0 && c > 0) || (a < 0 && b > 0 && c > 0)) {
		cout << "��� ����� ������������" << endl;
	}

	if (a < 0 && b < 0 && c < 0) {
		cout << "��� ������������� �����" << endl;
	}

	cout << "������� a: " << endl;
	cin >> A;
	cout << "������� b: " << endl;
	cin >> B;
	cout << "������� c: " << endl;
	cin >> C;

	if ((abs(A - B)) < (abs(A - C))) {
		cout << "����� 'b' ����� � ����� 'a', ��� 'c'" << endl;
	}

	if ((abs(A - B)) > (abs(A - C))) {
		cout << "����� 'c' ����� � ����� 'a', ��� 'b'" << endl;
	}
	if ((abs(A - B)) == (abs(A - C))) {
		cout << "��� ����� �� ���������� ���������� �� 'a'" << endl;
	}

	cout << "������� 'x' � ������ ������������ ����: " << endl;
	cin >> x_1;
	cout << "������� 'y' � ������ ������������ ����: " << endl;
	cin >> y_1;
	cout << "������� 'x' �� ������ ������������ ����: " << endl;
	cin >> x_2;
	cout << "������� 'y' �� ������ ������������ ����: " << endl;
	cin >> y_2;
	cout << "������� 'x' � ������� ������������ ����: " << endl;
	cin >> x_3;
	cout << "������� 'y' � ������� ������������ ����: " << endl;
	cin >> y_3;
	cout << "������� 'x' � �������� ������������ ����: " << endl;
	cin >> x_4;
	cout << "������� 'y' � �������� ������������ ����: " << endl;
	cin >> y_4;

	area = (0 + x_1) * (0 + y_1);
	cout << "������� ������ � ������ ������������ ���� = " << area << endl;

	cout << "������� x: " << endl;
	cin >> x;

	if (x <= 2)
		F = ((pow(x, 2)) + (4 * x) + 5);
	if (x > 2)
		F = (1 / ((pow(x, 2) + (4 * x) + 5)));

	cout << "F(x) = " << F << endl;

	return 0;
}