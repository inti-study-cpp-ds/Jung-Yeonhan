#include <iostream>
#include "VendingMachine.h"
using std::cin;
using std::cout;
using std::endl;


VendingMachine::VendingMachine(vector<Item>& item)
	: m_item{ item }, m_money{ } {
	for (int i = 0; i != m_item.size(); ++i) {
		cout << m_item[i].get_name() << " " << m_item[i].get_price() << "��"
			<< " ����: " << m_item[i].get_quantity() << "��";
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
		cout << "�ֹ��Ͻ� " << m_item[n].get_name() << "�� �ܵ� "
			<< m_money << "�� �Դϴ�." << endl;
	}
	else if (m_money == m_item[n].get_price()) {
		m_money -= m_item[n].get_price();
		cout << "�ֹ��Ͻ� " << m_item[n].get_name() << " ���Խ��ϴ�." << endl;
	}
	else {
		cout << "�ܾ��� �����մϴ�. ���� �߰��� �־��ּ���." << endl;
		receiveMoney();
		return inspectMoney(n);
	}
}
