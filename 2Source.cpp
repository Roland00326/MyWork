#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "��������� ������� ����" << endl;
	cout << "������ ������ ����: \n[1] ���� \n[2] ����� \n[3] ���� \n[4] �����";
	cout << "\n�������� ����� ����: ";
	int vremena;
	cin >> vremena;

	if (vremena == 1) {
		cout << "\n������ ����, ������� ������� �������." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 2) {
		cout << "\n������ �����, ������� ������� ������ � ����� � ����� ����." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 3) {
		cout << "\n������ ����, ��������� �����." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 4) {
		cout << "\n������ �����, ��������� �����, ��� �����." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else {
		cout << "\n������� �� ������, ����������.";
		Sleep(1000);
		system("cls");
			main();
	}
}