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
	vector<Item> item{ { "�ݶ�", 1000, 10 }, { "ĵĿ��", 900, 20 }, { "��", 600, 8 }, {"���̴�", 1200, 12 } };
	
	VendingMachine v{ item };

	cout << "���� �־��ּ���." << endl;
	v.receiveMoney();

	cout << "������ �����Ͻðڽ��ϱ�?" << endl;
	cin >> select;
	for (int i = 0; i < item.size(); ++i) {
		if (select == v.get_item(i).get_name()) {
			cout << v.get_item(i).get_name() << "�� �����ϼ̽��ϴ�." << endl;
			v.inspectMoney(i);
		}
	}
	
	return 0;
}
