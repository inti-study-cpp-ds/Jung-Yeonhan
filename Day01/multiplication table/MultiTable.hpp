#include <iostream>
#include "MultiTable.h"
using std::cout;
using std::cin;
using std::endl;

// ������
template <typename T>
MultiTable<T>::MultiTable()
	: m_dan{ 2 }, m_gob{ 1 } {
	cout << "����ϰ� ���� ���� �Է��ϼ���. >>> ";
	cin >> m_dan;
	if (m_dan > 9 || m_dan < 2) {
		cout << "��ȿ���� ���� ���Դϴ�." << endl;
		m_dan = 2;
	}
}

template <typename T>
void MultiTable<T>::print() {
	calculator(m_dan, m_gob);
}

// ���� ����Լ�
template <typename T>
void MultiTable<T>::calculator(T acc, T n) {
	printf("%d * %d = %d\n", acc, n, acc * n);
	if (n == 9)
		return;
	return calculator(acc, n + 1);
}