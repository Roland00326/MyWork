#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	for (int i = 60; i != 0; i--) {
		cout << "\r[+] Таймер: " << i;
		Sleep(1000);
	}
	return 0;
}