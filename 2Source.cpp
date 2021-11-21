#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Программа Времена Года" << endl;
	cout << "Список времен года: \n[1] Лето \n[2] Осень \n[3] Зима \n[4] Весна";
	cout << "\nВыберите время года: ";
	int vremena;
	cin >> vremena;

	if (vremena == 1) {
		cout << "\nСейчас лето, следует одеться полегче." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 2) {
		cout << "\nСейчас осень, следует одеться теплее и взять с собой зонт." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 3) {
		cout << "\nСейчас зима, оденьтесь тепло." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else if (vremena == 4) {
		cout << "\nСейчас весна, оденьтесь легче, чем зимой." << endl;
		Sleep(1000);
		system("cls");
		main();
	}
	else {
		cout << "\nВведите всё заново, пожалуйста.";
		Sleep(1000);
		system("cls");
			main();
	}
}