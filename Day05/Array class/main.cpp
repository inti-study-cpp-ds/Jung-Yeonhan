#include <iostream>
#include "ArrayClass.h"
using namespace std;

int main() {
	Array<int, 5> a{};
	cout << a.get_size();

	return 0;
}