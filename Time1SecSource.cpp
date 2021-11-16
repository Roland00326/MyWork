#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	for (int i = 0; i == 61; i++) {
		cout << "\r[+] Секундамер: " << i;
		Sleep(1000);
	}
	return 0;
}