#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

double a, b, number, c;
	c = 0;
	int a_int,b_int;
	cout << "������� ����: \n"
			"1 - [+]\n"
			"2 - [-]\n"
			"3 - [*]\n"
			"4 - [/]\n"
			"5 - [%]\n\n";
	
	cin >> number;
	cout << "������� �����: \n";
	cin >> a;
	cin >> b;
	if (number == 5) {
		a_int = a;
		b_int = b;
	}
	
	if (number == 1) {
		c = a + b;
		cout << "[+] ���������: " << a << " + " << b << " = " << c << endl;
	
	}
	else if (number == 2) {
		c = a - b;
		cout << "[-] ���������: " << a << " - " << b << " = " << c << endl;
		
	}
	else if (number == 3) {
		c = a * b;
		cout << "[*] ���������: " << a << " * " << b << " = " << c << endl;
	}
	else if (number == 4) {
		if (b == 0) {
			cout << "�� 0 ������ ������!\n";
		}
		else {
			c = a / b;
			cout << "[/] ���������: " << a << " / " << b << " = " << c << endl;
		}
	}
	else if (5) {
		c = a_int % b_int;
 		cout << "[%] ���������: " << a_int << " % " << b_int << " = " << c << endl;
		
	}
	else {
		cout << "������.";
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
cout << "[1] - ������\n"
	"[2] - �������\n"
	"[3] - ����\n"
	"[4] - ������\n"
	"[5] - ���\n"
	"[6] - ����\n"
	"[7] - ����\n"
	"[8] - ������\n"
	"[9] - ��������\n"
	"[10] - �������\n"
	"[11] - ������\n"
	"[12] - �������\n\n"
	"�������� ����� ����: \n\n\t";

cin >> a;
switch (a) {
case 1:
	cout << "\n�� ������� ������.";
	break;
case 2:
	cout << "\n�� ������� �������.";
	break;
case 3:
	cout << "\n�� ������� ����.";
	break;
case 4:
	cout << "\n�� ������� ������.";
	break;
case 5:
	cout << "\n�� ������� ���.";
	break;
case 6:
	cout << "\n�� ������� ����.";
	break;
case 7:
	cout << "\n�� ������� ����.";
	break;
case 8:
	cout << "\n�� ������� ������.";
	break;
case 9:
	cout << "\n�� �������  ��������.";
	break;
case 10:
	cout << "\n�� ������� �������.";
	break;
case 11:
	cout << "\n�� ������� ������.";
	break;
case 12:
	cout << "\n�� ������� �������.";
	break;
default:
	cout << "\n�� ������� �� ������ ��������!";
	break;
}
*/
//int menu, menuRu, menuEn;
//cout << "[+] ����������\n\n"
//		"[1]������� �����\n"
//		"[2]���������� �����\n\n"
//		"[3]�����\n\n"
//;
//cin >> menu;
//
//switch (menu) {
//case 1:
//	cout << "\n[+] ���������� - ������ ������� ����\n"
//		"[1]���\n"
//		"[2]���\n"
//		"[3]������\n"
//		"[4]��������\n"
//		"[5]����\n"
//		"[6]�����\n"
//		"[7]�������\n"
//		"[8]�����\n"
//		"[9]����\n"
//		"[10]������\n"
//		"[11]�����\n"
//		"[12]��������\n"
//		"[13]������\n"
//		"[14]�����\n"
//		"[15]����\n\n";
//	cin >> menuRu;
//	if (menuRu == 1) {
//		cout << "\n[+] ������� : ��� --> House";
//		
//	}
//	else if (menuRu == 2) {
//		cout << "\n[+] ������� : ��� --> Cat";
//		
//	}
//	else if (menuRu == 3) {
//		cout << "\n[+] ������� : ������ --> Apple";
//		
//	}
//	else if (menuRu == 4) {
//		cout << "\n[+] ������� : �������� --> Orange";
//		
//	}
//	else if (menuRu == 5) {
//		cout << "\n[+] ������� : ���� --> Water";
//		
//	}
//	else if (menuRu == 6) {
//		cout << "\n[+] ������� : ����� --> Fire";
//		
//	}
//	else if (menuRu == 7) {
//			cout << "\n[+] ������� : ������� --> Telephone";
//			
//		}
//	else if (menuRu == 8) {
//		cout << "\n[+] ������� : ����� --> New";
//		
//	}
//	else if (menuRu == 9) {
//		cout << "\n[+] ������� : ���� --> Mouse";
//		
//	}
//	else if (menuRu == 10) {
//		cout << "\n[+] ������� : ������ --> Dog";
//		
//	}
//	else if (menuRu == 11) {
//		cout << "\n[+] ������� : ����� --> Axe";
//		
//	}
//	else if (menuRu == 12) {
//		cout << "\n[+] ������� : �������� --> Monkey";
//		
//	}
//	else if (menuRu == 13) {
//		cout << "\n[+] ������� : ������ --> Air";
//		
//	}
//	else if (menuRu == 14) {
//		cout << "\n[+] ������� : ����� --> Tail";
//		
//	}
//	else if (menuRu == 15) {
//		cout << "\n[+] ������� : ���� --> Fish";
//		
//	}
//	break;
//case 2:
//	cout << "\n[+] ���������� - ������ ���������� ����\n"
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
//		cout << "\n[+] ������� : House --> ���";
//
//	}
//	else if (menuEn == 2) {
//		cout << "\n[+] ������� : Cat --> ���";
//
//	}
//	else if (menuEn == 3) {
//		cout << "\n[+] ������� : Apple --> ������";
//
//	}
//	else if (menuEn == 4) {
//		cout << "\n[+] ������� : Orange --> ��������";
//
//	}
//	else if (menuEn == 5) {
//		cout << "\n[+] ������� : Water --> ����";
//
//	}
//	else if (menuEn == 6) {
//		cout << "\n[+] ������� : Fire --> �����";
//
//	}
//	else if (menuEn == 7) {
//		cout << "\n[+] ������� : Telephone --> �������";
//
//	}
//	else if (menuEn == 8) {
//		cout << "\n[+] ������� : New --> �����";
//
//	}
//	else if (menuEn == 9) {
//		cout << "\n[+] ������� : Mouse --> ����";
//
//	}
//	else if (menuEn == 10) {
//		cout << "\n[+] ������� : Dog --> ������";
//
//	}
//	else if (menuEn == 11) {
//		cout << "\n[+] ������� : Axe --> �����";
//
//	}
//	else if (menuEn == 12) {
//		cout << "\n[+] ������� : Monkey --> ��������";
//
//	}
//	else if (menuEn == 13) {
//		cout << "\n[+] ������� : Air --> ������";
//
//	}
//	else if (menuEn == 14) {
//		cout << "\n[+] ������� : Tail --> �����";
//
//	}
//	else if (menuEn == 15) {
//		cout << "\n[+] ������� : Fish --> ����";
//
//	}
//	break;
//case 3:
//	exit;
//	break;
//default: 
//	cout << "������!";
//	break;
//}