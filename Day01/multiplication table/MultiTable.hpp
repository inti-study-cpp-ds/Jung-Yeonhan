#include <iostream>
#include "MultiTable.h"
using std::cout;
using std::cin;
using std::endl;

// 생성자
template <typename T>
MultiTable<T>::MultiTable()
	: m_dan{ 2 }, m_gob{ 1 } {
	cout << "출력하고 싶은 단을 입력하세요. >>> ";
	cin >> m_dan;
	if (m_dan > 9 || m_dan < 2) {
		cout << "유효하지 않은 값입니다." << endl;
		m_dan = 2;
	}
}

template <typename T>
void MultiTable<T>::print() {
	calculator(m_dan, m_gob);
}

// 꼬리 재귀함수
template <typename T>
void MultiTable<T>::calculator(T acc, T n) {
	printf("%d * %d = %d\n", acc, n, acc * n);
	if (n == 9)
		return;
	return calculator(acc, n + 1);
}