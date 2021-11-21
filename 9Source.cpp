#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] Программа \"Геометрические фигуры\"\n\n";
	cout << "[1] Прямоугольник\n\n";
	cout << "[+] Ввыберите фигуру: ";

	int figura;
	cin >> figura;

	switch (figura) {
	case 1:
		system("cls");
		cout << "[1] Прямоугольник\n\n";
		cout << "[+] Ширина:";
		int shir;
		cin >> shir;

		cout << "[+] Высота: ";
		int vys;
		cin >> vys;

		cout << "[+] Текстура: ";
		char texture;
		cin >> texture;

		for (int y = 0; y < vys; y++) {
			cout << "\x1b[96m# ";
			cout << "\t\t\t\t\t\t\t";
			for (int x = 0; x < shir; x++) {
				cout << texture << ". ";
			}
			cout << endl;
		}
	}
	return 0;
}
