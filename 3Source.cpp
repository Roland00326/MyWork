#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

double a, b, number, c;
	c = 0;
	int a_int,b_int;
	cout << "Введите знак: \n"
			"1 - [+]\n"
			"2 - [-]\n"
			"3 - [*]\n"
			"4 - [/]\n"
			"5 - [%]\n\n";
	
	cin >> number;
	cout << "Введите числа: \n";
	cin >> a;
	cin >> b;
	if (number == 5) {
		a_int = a;
		b_int = b;
	}
	
	if (number == 1) {
		c = a + b;
		cout << "[+] Результат: " << a << " + " << b << " = " << c << endl;
	
	}
	else if (number == 2) {
		c = a - b;
		cout << "[-] Результат: " << a << " - " << b << " = " << c << endl;
		
	}
	else if (number == 3) {
		c = a * b;
		cout << "[*] Результат: " << a << " * " << b << " = " << c << endl;
	}
	else if (number == 4) {
		if (b == 0) {
			cout << "На 0 делить нельзя!\n";
		}
		else {
			c = a / b;
			cout << "[/] Результат: " << a << " / " << b << " = " << c << endl;
		}
	}
	else if (5) {
		c = a_int % b_int;
 		cout << "[%] Результат: " << a_int << " % " << b_int << " = " << c << endl;
		
	}
	else {
		cout << "Ошибка.";
	}

	return 0;
}
	/*int a1 = 1, a2 = 2, a3 = 3, a4 = 4, a5 = 5, a6 = 6, a7 = 7, a8 = 8, a9 = 9, a10 = 10;
	cout << "\na1 = " << a1;
	cout << "\na2 = " << a2;
	cout << "\na3 = " << a3;
	cout << "\na4 = " << a4;
	cout << "\na5 = " << a5;
	cout << "\na6 = " << a6;
	cout << "\na7 = " << a7;
	cout << "\na8 = " << a8;
	cout << "\na9 = " << a9;
	cout << "\na10 = " << a10;
	double b1 = 1, b2 = 2, b3 = 3, b4 = 4, b5 = 5, b6 = 6, b7 = 7, b8 = 8, b9 = 9, b10 = 10;
	cout << "\nb1 = " << b1;
	cout << "\nb2 = " << b2;
	cout << "\nb3 = " << b3;
	cout << "\nb4 = " << b4;
	cout << "\nb5 = " << b5;
	cout << "\nb6 = " << b6;
	cout << "\nb7 = " << b7;
	cout << "\nb8 = " << b8;
	cout << "\nb9 = " << b9;
	cout << "\nb10 = " << b10;
	float c1 = 1, c2 = 2, c3 = 3, c4 = 4, c5 = 5, c6 = 6, c7 = 7, c8 = 8, c9 = 9, c10 = 10;
	cout << "\nc1 = " << c1;
	cout << "\nc2 = " << c2;
	cout << "\nc3 = " << c3;
	cout << "\nc4 = " << c4;
	cout << "\nc5 = " << c5;
	cout << "\nc6 = " << c6;
	cout << "\nc7 = " << c7;
	cout << "\nc8 = " << c8;
	cout << "\nc9 = " << c9;
	cout << "\nc10 = " << c10;
	bool d1 = true, d2 = false, d3 = false, d4 = false, d5 = false, d6 = false, d7 = true, d8 = true, d9 = true, d10 = true;
	cout << "\nd1 = " << d1;
	cout << "\nd2 = " << d2;
	cout << "\nd3 = " << d3;
	cout << "\nd4 = " << d4;
	cout << "\nd5 = " << d5;
	cout << "\nd6 = " << d6;
	cout << "\nd7 = " << d7;
	cout << "\nd8 = " << d8;
	cout << "\nd9 = " << d9;
	cout << "\nd10 = " << d10;
	char e1 = '8', e2 = 'a', e3 = 'b', e4 = '4', e5 = '5', e6 = '6', e7 = '7', e8 = '8', e9 = '9', e10 = '10';
	cout << "\ne1 = " << e1;
	cout << "\ne2 = " << e2;
	cout << "\ne3 = " << e3;
	cout << "\ne4 = " << e4;
	cout << "\ne5 = " << e5;
	cout << "\ne6 = " << e6;
	cout << "\ne7 = " << e7;
	cout << "\ne8 = " << e8;
	cout << "\ne9 = " << e9;
	cout << "\ne10 = " << e10;
	long f1 = 1, f2 = 1, f3 = 1, f4 = 1, f5 = 1, f6 = 1, f7 = 1, f8 = 1, f9 = 1, f10 = 1;
	cout << "\nf1 = " << f1;
	cout << "\nf2 = " << f2;
	cout << "\nf3 = " << f3;
	cout << "\nf4 = " << f4;
	cout << "\nf5 = " << f5;
	cout << "\nf6 = " << f6;
	cout << "\nf7 = " << f7;
	cout << "\nf8 = " << f8;
	cout << "\nf9 = " << f9;
	cout << "\nf10 = " << f10; 
	*/
	
/*int a;
cout << "[1] - Январь\n"
	"[2] - Февраль\n"
	"[3] - Март\n"
	"[4] - Апрель\n"
	"[5] - Май\n"
	"[6] - Июнь\n"
	"[7] - Июль\n"
	"[8] - Август\n"
	"[9] - Сентябрь\n"
	"[10] - Октябрь\n"
	"[11] - Ноябрь\n"
	"[12] - Декабрь\n\n"
	"Выберите месяц года: \n\n\t";

cin >> a;
switch (a) {
case 1:
	cout << "\nВы выбрали январь.";
	break;
case 2:
	cout << "\nВы выбрали февраль.";
	break;
case 3:
	cout << "\nВы выбрали март.";
	break;
case 4:
	cout << "\nВы выбрали апрель.";
	break;
case 5:
	cout << "\nВы выбрали май.";
	break;
case 6:
	cout << "\nВы выбрали июнь.";
	break;
case 7:
	cout << "\nВы выбрали июль.";
	break;
case 8:
	cout << "\nВы выбрали август.";
	break;
case 9:
	cout << "\nВы выбрали  сентябрь.";
	break;
case 10:
	cout << "\nВы выбрали октябрь.";
	break;
case 11:
	cout << "\nВы выбрали ноябрь.";
	break;
case 12:
	cout << "\nВы выбрали декабрь.";
	break;
default:
	cout << "\nВы выбрали не верное значение!";
	break;
}
*/
//int menu, menuRu, menuEn;
//cout << "[+] Переводчик\n\n"
//		"[1]Русские слова\n"
//		"[2]Английские слова\n\n"
//		"[3]Выйти\n\n"
//;
//cin >> menu;
//
//switch (menu) {
//case 1:
//	cout << "\n[+] Переводчик - Список русских слов\n"
//		"[1]Дом\n"
//		"[2]Кот\n"
//		"[3]Яблоко\n"
//		"[4]Апельсин\n"
//		"[5]Вода\n"
//		"[6]Огонь\n"
//		"[7]Телефон\n"
//		"[8]Новый\n"
//		"[9]Мышь\n"
//		"[10]Собака\n"
//		"[11]Топор\n"
//		"[12]Обезьяна\n"
//		"[13]Воздух\n"
//		"[14]Хвост\n"
//		"[15]Рыба\n\n";
//	cin >> menuRu;
//	if (menuRu == 1) {
//		cout << "\n[+] Перевод : Дом --> House";
//		
//	}
//	else if (menuRu == 2) {
//		cout << "\n[+] Перевод : Кот --> Cat";
//		
//	}
//	else if (menuRu == 3) {
//		cout << "\n[+] Перевод : Яблоко --> Apple";
//		
//	}
//	else if (menuRu == 4) {
//		cout << "\n[+] Перевод : Апельсин --> Orange";
//		
//	}
//	else if (menuRu == 5) {
//		cout << "\n[+] Перевод : Вода --> Water";
//		
//	}
//	else if (menuRu == 6) {
//		cout << "\n[+] Перевод : Огонь --> Fire";
//		
//	}
//	else if (menuRu == 7) {
//			cout << "\n[+] Перевод : Телефон --> Telephone";
//			
//		}
//	else if (menuRu == 8) {
//		cout << "\n[+] Перевод : Новый --> New";
//		
//	}
//	else if (menuRu == 9) {
//		cout << "\n[+] Перевод : Мышь --> Mouse";
//		
//	}
//	else if (menuRu == 10) {
//		cout << "\n[+] Перевод : Собака --> Dog";
//		
//	}
//	else if (menuRu == 11) {
//		cout << "\n[+] Перевод : Топор --> Axe";
//		
//	}
//	else if (menuRu == 12) {
//		cout << "\n[+] Перевод : Обезьяна --> Monkey";
//		
//	}
//	else if (menuRu == 13) {
//		cout << "\n[+] Перевод : Воздух --> Air";
//		
//	}
//	else if (menuRu == 14) {
//		cout << "\n[+] Перевод : Хвост --> Tail";
//		
//	}
//	else if (menuRu == 15) {
//		cout << "\n[+] Перевод : Рыба --> Fish";
//		
//	}
//	break;
//case 2:
//	cout << "\n[+] Переводчик - Список английских слов\n"
//		"[1]House\n"
//		"[2]Cat\n"
//		"[3]Apple\n"
//		"[4]Orange\n"
//		"[5]Water\n"
//		"[6]Fire\n"
//		"[7]Telephon\n"
//		"[8]New\n"
//		"[9]Mouse\n"
//		"[10]Dog\n"
//		"[11]Axe\n"
//		"[12]Monkey\n"
//		"[13]Air\n"
//		"[14]Tail\n"
//		"[15]Fish\n\n";
//	cin >> menuEn;
//	if (menuEn == 1) {
//		cout << "\n[+] Перевод : House --> Дом";
//
//	}
//	else if (menuEn == 2) {
//		cout << "\n[+] Перевод : Cat --> Кот";
//
//	}
//	else if (menuEn == 3) {
//		cout << "\n[+] Перевод : Apple --> Яблоко";
//
//	}
//	else if (menuEn == 4) {
//		cout << "\n[+] Перевод : Orange --> Апельсин";
//
//	}
//	else if (menuEn == 5) {
//		cout << "\n[+] Перевод : Water --> Вода";
//
//	}
//	else if (menuEn == 6) {
//		cout << "\n[+] Перевод : Fire --> Огонь";
//
//	}
//	else if (menuEn == 7) {
//		cout << "\n[+] Перевод : Telephone --> Телефон";
//
//	}
//	else if (menuEn == 8) {
//		cout << "\n[+] Перевод : New --> Новый";
//
//	}
//	else if (menuEn == 9) {
//		cout << "\n[+] Перевод : Mouse --> Мышь";
//
//	}
//	else if (menuEn == 10) {
//		cout << "\n[+] Перевод : Dog --> Собака";
//
//	}
//	else if (menuEn == 11) {
//		cout << "\n[+] Перевод : Axe --> Топор";
//
//	}
//	else if (menuEn == 12) {
//		cout << "\n[+] Перевод : Monkey --> Обезьяна";
//
//	}
//	else if (menuEn == 13) {
//		cout << "\n[+] Перевод : Air --> Воздух";
//
//	}
//	else if (menuEn == 14) {
//		cout << "\n[+] Перевод : Tail --> Хвост";
//
//	}
//	else if (menuEn == 15) {
//		cout << "\n[+] Перевод : Fish --> Рыба";
//
//	}
//	break;
//case 3:
//	exit;
//	break;
//default: 
//	cout << "Ошибка!";
//	break;
//}