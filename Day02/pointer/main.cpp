#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int* pa = &a;
	int& ra = a;

	cout << a << endl << *pa << endl << ra << endl;

	return 0;
}