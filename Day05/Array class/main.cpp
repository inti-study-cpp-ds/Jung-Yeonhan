#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	int arr[]{ 1, 2, 3, 4, 5 };
	Array<int, 5> a{arr};
	Array<int, 5> b{a};
	Array<int, 5> c{ 1, 2, 3, 4, 5 };
	Array<int, 1> d;

	cout << c[1] << endl;
	cout << d.isEmpty() << endl;


	return 0;
}