#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] ������ ����: " <<endl;
	cout << "[1]������" <<endl;
	cout << "[2]�������" <<endl;
	cout << "[3]����" <<endl;
	cout << "[4]�������" <<endl;
	cout << "[5]���" <<endl;
	cout << "[6]����" <<endl;
	cout << "[7]����" <<endl;
	cout << "[8]������" <<endl;
	cout << "[9]��������" <<endl;
	cout << "[10]�������" <<endl;
	cout << "[11]������" <<endl;
	cout << "[12]�������" <<endl;
	cout << "����� ������: ";

	int nona;
	cin >> nona;
 
	switch (nona) {

	
	case 1:
			cout << "�� ������� ����� ������" <<endl;
			break;
	case 2:
			cout << "�� ������� ����� �������" << endl;
				break;
	case 3:
			cout << "�� ������� ����� ����" <<endl;
				break;
	case 4:
			cout << "�� ������� ����� ������" <<endl;
				break;
	case 5:
			cout << "�� ������� ����� ���" <<endl;
				break;
	case 6:
			cout << "�� ������� ����� ����" <<endl;
				break;
	case 7:
			cout << "�� ������� ����� ����" <<endl;
				break;
	case 8:
			cout << "�� ������� ����� ������" <<endl;
				break;
	case 9:
			cout << "�� ������� ����� ��������" <<endl;
				break;
	case 10:
			cout << "�� ������� ����� �������" <<endl;
				break;
	case 11:
			cout << "�� ������� ����� ������" <<endl;
				break;
	case 12:
			cout << "�� ������� ����� �������" <<endl;
				break;
	case 13:

	default:
		cout << "������ ������ ���" << endl;
		break;


}

	return 0;
}