#pragma once
#include <vector>
#include "Item.h"
using std::vector;

class VendingMachine {
public:
	VendingMachine(vector<Item>&);

	void receiveMoney();
	void inspectMoney(int);

	Item& get_item(int n) {
		return m_item[n];
	}

private:
	vector<Item>& m_item;
	int m_money;
};
