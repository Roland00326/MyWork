#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[1] Крестик\n\n";
	cout << "[+] Размер: ";
	int size;
	cin >> size;

	cout << "[+] Текстура: ";
	char texture;
	cin >> texture;

	system("cls");
	cout << "Результат: \n\n";

	for (int y = 0; y < size; y++) {
		cout << "\x1b[93m# ";
		cout << "\t\t\t\t\t";
		for (int x = 0; x < size; x++) {
			if (x == size - y || y == x + 1) {
				cout << "# ";
			}
			else {
				cout << ". ";
			}
		}
		cout << endl;
	}
	return 0;
}