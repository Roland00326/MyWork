#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] Месяца года: " <<endl;
	cout << "[1]Январь" <<endl;
	cout << "[2]Февраль" <<endl;
	cout << "[3]Март" <<endl;
	cout << "[4]Апрельь" <<endl;
	cout << "[5]Май" <<endl;
	cout << "[6]Июнь" <<endl;
	cout << "[7]Июль" <<endl;
	cout << "[8]Август" <<endl;
	cout << "[9]Сентябрь" <<endl;
	cout << "[10]Октябрь" <<endl;
	cout << "[11]Ноябрь" <<endl;
	cout << "[12]Декабрь" <<endl;
	cout << "выбор месяца: ";

	int nona;
	cin >> nona;
 
	switch (nona) {

	
	case 1:
			cout << "Вы выбрали месяц Январь" <<endl;
			break;
	case 2:
			cout << "Вы выбрали месяц Февраль" << endl;
				break;
	case 3:
			cout << "Вы выбрали месяц Март" <<endl;
				break;
	case 4:
			cout << "Вы выбрали месяц Апрель" <<endl;
				break;
	case 5:
			cout << "Вы выбрали месяц Май" <<endl;
				break;
	case 6:
			cout << "Вы выбрали месяц Июнь" <<endl;
				break;
	case 7:
			cout << "Вы выбрали месяц Июль" <<endl;
				break;
	case 8:
			cout << "Вы выбрали месяц Август" <<endl;
				break;
	case 9:
			cout << "Вы выбрали месяц Сентябрь" <<endl;
				break;
	case 10:
			cout << "Вы выбрали месяц Октябрь" <<endl;
				break;
	case 11:
			cout << "Вы выбрали месяц Ноябрь" <<endl;
				break;
	case 12:
			cout << "Вы выбрали месяц Декабрь" <<endl;
				break;
	case 13:

	default:
		cout << "такого месяца нет" << endl;
		break;


}

	return 0;
}