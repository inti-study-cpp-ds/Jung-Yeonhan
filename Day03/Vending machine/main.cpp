#include <iostream>
#include <vector>
#include "VendingMachine.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int money{ };
	string select{ "" };
	vector<Item> item{ { "콜라", 1000, 10 }, { "캔커피", 900, 20 }, { "물", 600, 8 }, {"사이다", 1200, 12 } };
	
	VendingMachine v{ item };

	cout << "돈을 넣어주세요." << endl;
	v.receiveMoney();

	cout << "무엇을 선택하시겠습니까?" << endl;
	cin >> select;
	for (int i = 0; i < item.size(); ++i) {
		if (select == v.get_item(i).get_name()) {
			cout << v.get_item(i).get_name() << "를 선택하셨습니다." << endl;
			v.inspectMoney(i);
		}
	}
	
	return 0;
}
