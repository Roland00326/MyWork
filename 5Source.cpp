#include <iostream>
#include <Windows.h>


using namespace std;

int main() {

	setlocale(0, "");

	cout << "[+] Мы рады видеть вас в нашем переводчике, выберите что вам необходимо перевести:\n\n [1] Русские слова\n [2] Английские слова\n" << endl;
	cout << "Выберите значение:";

	int menu;
	cin >> menu;

	switch (menu) {
	case 1: {
		cout << "\n[+] Переводчик << Cписок русских слов >>\n[1] Дом\n[2] Дорога\n[3] Клавиатура\n[4] Монитор\n[5] Вентилятор\n[6] Компьютер\n[7] Игрок\n[8] Город\n[9] Ит-программы\n[10] Программирование\n[11] Страна\n[12] Континент\n[13] Топливо\n[14] Двигатель\n[15] Автомобтль\n\n";
		break;
	}

	case 2: {
		cout << "\n[-] Переводчик << Cписок английских слов >>\n[1] Home\n[2] Road\n[3] Keyboard\n[4] Screen\n[5] Fan\n[6] Computer\n[7] Player\n[8] City\n[9] It - programs\n[10] Programming\n[11] Country\n[12] Continent\n[13] Fuel\n[14] Engine\n[15] Car\n\n";
		break;
	}

	default:
		cout << "Введено неверное значение! Введите значение правильно!" << endl << endl;
		break;
	}

	cout << "Выберите слово:";

	int menu2;
	cin >> menu2;

	switch (menu2) {


	case 1: {

		cout << "[Перевод] Home -> Дом" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 2: {

		cout << "[Перевод] Road -> Дорога" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 3: {

		cout << "[Перевод] Keyboard -> Клавиатура" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 4: {
		cout << "[Перевод] Screen -> Монитор" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}
		
	case 5: {
		cout << "[Перевод] Fan -> Вентилятор" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 6: {

		cout << "[Перевод] Computer -> Компьютер" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 7: {

		cout << "[Перевод] Player -> Игрок" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 8: {

		cout << "[Перевод] City -> Город" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 9: {

		cout << "[Перевод] It-programs  ->  Ит-программы" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 10: {

		cout << "[Перевод] Programming -> Программирование" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 11: {

		cout << "[Перевод] Country -> Страна" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 12: {

		cout << "[Перевод] Continent -> Континент" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 13: {

		cout << "[Перевод] Fuel -> Топливо" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 14: {

		cout << "[Перевод] Engine -> Двигатель" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}

	case 15: {

		cout << "[Перевод] Car -> Автомобиль" << endl;
		Sleep(2500);
		system("cls");
		main();
		break;
	}
	default:

		cout << "Вы ввели неверное значение!";
	}
	return 0;
}