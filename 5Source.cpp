#include <iostream>
#include <Windows.h>


using namespace std;

int main() {

	setlocale(0, "");

	cout << "[+] �� ���� ������ ��� � ����� �����������, �������� ��� ��� ���������� ���������:\n\n [1] ������� �����\n [2] ���������� �����\n" << endl;
	cout << "�������� ��������:";

	int menu;
	cin >> menu;

	switch (menu) {
	case 1: {
		cout << "\n[+] ���������� << C����� ������� ���� >>\n[1] ���\n[2] ������\n[3] ����������\n[4] �������\n[5] ����������\n[6] ���������\n[7] �����\n[8] �����\n[9] ��-���������\n[10] ����������������\n[11] ������\n[12] ���������\n[13] �������\n[14] ���������\n[15] ����������\n\n";
		break;
	}

	case 2: {
		cout << "\n[-] ���������� << C����� ���������� ���� >>\n[1] Home\n[2] Road\n[3] Keyboard\n[4] Screen\n[5] Fan\n[6] Computer\n[7] Player\n[8] City\n[9] It - programs\n[10] Programming\n[11] Country\n[12] Continent\n[13] Fuel\n[14] Engine\n[15] Car\n\n";
		break;
	}

	default:
		cout << "������� �������� ��������! ������� �������� ���������!" << endl << endl;
		break;
	}

	cout << "�������� �����:";

	int menu2;
	cin >> menu2;

	switch (menu2) {


	case 1: {

		cout << "[�������] Home -> ���" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 2: {

		cout << "[�������] Road -> ������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 3: {

		cout << "[�������] Keyboard -> ����������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 4: {
		cout << "[�������] Screen -> �������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}
		
	case 5: {
		cout << "[�������] Fan -> ����������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 6: {

		cout << "[�������] Computer -> ���������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 7: {

		cout << "[�������] Player -> �����" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 8: {

		cout << "[�������] City -> �����" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 9: {

		cout << "[�������] It-programs  ->  ��-���������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 10: {

		cout << "[�������] Programming -> ����������������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 11: {

		cout << "[�������] Country -> ������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 12: {

		cout << "[�������] Continent -> ���������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 13: {

		cout << "[�������] Fuel -> �������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 14: {

		cout << "[�������] Engine -> ���������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 15: {

		cout << "[�������] Car -> ����������" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}
	default:

		cout << "�� ����� �������� ��������!";
	}
	return 0;
}