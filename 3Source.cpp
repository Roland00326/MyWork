#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	double a, b, number, c;
	c = 0;
	int a_int, b_int;
	cout << "������� ����: \n"
		"1 - [+]\n"
		"2 - [-]\n"
		"3 - [*]\n"
		"4 - [/]\n"
		"5 - [%]\n\n";

	cin >> number;
	cout << "������� �����: \n";
	cin >> a;
	cin >> b;
	if (number == 5) {
		a_int = a;
		b_int = b;
	}

	if (number == 1) {
		c = a + b;
		cout << "[+] ���������: " << a << " + " << b << " = " << c << endl;

	}
	else if (number == 2) {
		c = a - b;
		cout << "[-] ���������: " << a << " - " << b << " = " << c << endl;

	}
	else if (number == 3) {
		c = a * b;
		cout << "[*] ���������: " << a << " * " << b << " = " << c << endl;
	}
	else if (number == 4) {
		if (b == 0) {
			cout << "�� 0 ������ ������!\n";
		}
		else {
			c = a / b;
			cout << "[/] ���������: " << a << " / " << b << " = " << c << endl;
		}
	}
	else if (5) {
		c = a_int % b_int;
		cout << "[%] ���������: " << a_int << " % " << b_int << " = " << c << endl;

	}
	else {
		cout << "������.";
	}
	return 0;
}