#include <iostream>
#include <vector>
#include "VendingMachine.h"
using namespace std;

int main() {
	vector<Item> item{ { "콜라", 1000, 10 }, { "캔커피", 900, 20 }, { "물", 600, 8 }, {"사이다", 1200, 12 } };
	VendingMachine v{ item };
	return 0;
}
