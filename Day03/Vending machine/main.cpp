#include <iostream>
#include <vector>
#include "VendingMachine.h"
using namespace std;

int main() {
	vector<Item> item{ { "�ݶ�", 1000, 10 }, { "ĵĿ��", 900, 20 }, { "��", 600, 8 }, {"���̴�", 1200, 12 } };
	VendingMachine v{ item };
	return 0;
}
