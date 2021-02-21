#include "VendingMachine.h"
using std::cout;
using std::endl;


VendingMachine::VendingMachine(vector<Item>& item)
	: m_item{ item } {
	cout << "자판기에 ";
	for (int i = 0; i != m_item.size(); ++i) {
		cout << m_item[i].get_name();
		if (i < m_item.size() - 1)
			cout << ", ";
	}
}
