#include <iostream>
#include "VendingMachine.h"
using std::cin;
using std::cout;
using std::endl;


VendingMachine::VendingMachine(vector<Item>& item)
	: m_item{ item }, m_money{ } {
	for (int i = 0; i != m_item.size(); ++i) {
		cout << m_item[i].get_name() << " " << m_item[i].get_price() << "원"
			<< " 수량: " << m_item[i].get_quantity() << "개";
		if (i < m_item.size() - 1)
			cout << ", ";
		cout << endl;
	}
	cout << endl;
}

void VendingMachine::receiveMoney() {
	int temp{ };
	cin >> temp;
	m_money += temp;
}

void VendingMachine::inspectMoney(int n) {
	if (m_money > m_item[n].get_price()) {
		m_money -= m_item[n].get_price();
		cout << "주문하신 " << m_item[n].get_name() << "와 잔돈 "
			<< m_money << "원 입니다." << endl;
	}
	else if (m_money = m_item[n].get_price()) {
		m_money -= m_item[n].get_price();
		cout << "주문하신 " << m_item[n].get_name() << " 나왔습니다." << endl;
	}
	else {
		cout << "잔액이 부족합니다. 돈을 추가로 넣어주세요." << endl;
		receiveMoney();
		return inspectMoney(n);
	}
}
