#include <iostream>
using namespace std;

int sum() {
	return 55;
}

int sum_2() {
	return 66;
}

int main() {
	setlocale(0, "");

	cout << sum_2() + sum() << endl;

	int _; cin >> _;
	return 0;
}