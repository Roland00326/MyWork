#include <iostream>
#include <windows.h>
#define clear system("cls");
using namespace std;

void dlinaGoriz() {
	setlocale(0, "");
	clear;

	int d = 0;

	cout << "[+] Длина линии: ";
	int a;
	cin >> a;
	cout << "[+] Текстура линии: ";
	char b;
	cin >> b;
	cout << "[+] Результат: \n";

	while (d < a) {
		cout << b;
		d++ ;
	}
}

void dlinaVert() {
		setlocale(0, "");
		clear;

		int d = 0;
	
		cout << "[+] Длина линии: ";
		int a;
		cin >> a;
		cout << "[+] Текстура линии: ";
		char b;
		cin >> b;
		cout << "[+] Результат: \n";

		while (d < a) {
			cout << b << endl;
			d++;
		}
	}

void figura() {
		setlocale(0, "");
		clear;
		cout << "[+] Фигура: *Линия*\n\n"
			<< "[+] Выберите тип:\n"
			<< "[1] Горизонтальная\n"
			<< "[2] Вертикальная\n\n";

		cout << "[+] Выберите тип: ";

		int tip;
		cin >> tip;

		if (tip == 1) {
			dlinaGoriz();
		}
		else if (tip == 2) {
			dlinaVert();
		}
		else {
			cout << "\n[+] Данного типа нет в базе данных.";
			Sleep(2000);
			clear;
			figura();
		}
	}

int main() {
		setlocale(0, "");

		cout << "[+] Программа *Геометрические фигуры*\n\n";
		cout << "[1] Линия\n\n";
		cout << "[+] Выберите фигуру: ";

		int figure;
		cin >> figure;

		if (figure == 1) {
			figura();
		}
		else {
			cout << "\n[+]Такой фигуры нет в базе данных.";
			Sleep(2000);
			clear;
			main();
		}
		return 0;
	}