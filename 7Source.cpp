#include <iostream>
#include <windows.h>
#define clear system("cls");
using namespace std;

void dlinaGoriz() {
	setlocale(0, "");
	clear;

	int d = 0;

	cout << "[+] ����� �����: ";
	int a;
	cin >> a;
	cout << "[+] �������� �����: ";
	char b;
	cin >> b;
	cout << "[+] ���������: \n";

	while (d < a) {
		cout << b;
		d++ ;
	}
}

void dlinaVert() {
		setlocale(0, "");
		clear;

		int d = 0;
	
		cout << "[+] ����� �����: ";
		int a;
		cin >> a;
		cout << "[+] �������� �����: ";
		char b;
		cin >> b;
		cout << "[+] ���������: \n";

		while (d < a) {
			cout << b << endl;
			d++;
		}
	}

void figura() {
		setlocale(0, "");
		clear;
		cout << "[+] ������: *�����*\n\n"
			<< "[+] �������� ���:\n"
			<< "[1] ��������������\n"
			<< "[2] ������������\n\n";

		cout << "[+] �������� ���: ";

		int tip;
		cin >> tip;

		if (tip == 1) {
			dlinaGoriz();
		}
		else if (tip == 2) {
			dlinaVert();
		}
		else {
			cout << "\n[+] ������� ���� ��� � ���� ������.";
			Sleep(2000);
			clear;
			figura();
		}
	}

int main() {
		setlocale(0, "");

		cout << "[+] ��������� *�������������� ������*\n\n";
		cout << "[1] �����\n\n";
		cout << "[+] �������� ������: ";

		int figure;
		cin >> figure;

		if (figure == 1) {
			figura();
		}
		else {
			cout << "\n[+]����� ������ ��� � ���� ������.";
			Sleep(2000);
			clear;
			main();
		}
		return 0;
	}