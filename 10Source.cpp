#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[1] �����������\n\n";
	cout << "[+] ������: ";
	int size;
	cin >> size;

	cout << "[+] ��������: ";
	char texture;
	cin >> texture;

	system("cls");
	cout << "���������: \n\n";

	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			if (x == ( size / 2) + y ||
				x == ( size /2) -y ||
				y == size /2) {
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