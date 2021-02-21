#pragma once
#include <vector>
#include "Item.h"
using std::vector;

class VendingMachine {
public:
	VendingMachine(vector<Item>&);


private:
	vector<Item>& m_item;
};
