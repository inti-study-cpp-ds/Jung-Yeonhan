#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::endl;
using std::string;

int main() {
	LinkedList<int> classNum{ };
	// �й��� ������ �޾Ƽ� ����
	classNum.insert(0, 12171850);
	classNum.insert(1, 12181825);
	classNum.insert(2, 12191831);
	classNum.insert(3, 12201862);
	classNum.insert(4, 12211882);

	LinkedList<string> name{ };
	// ���� ������ ������ �޾Ƽ� ����
	name.insert(0, "������");
	name.insert(1, "������");
	name.insert(2, "������");
	name.insert(3, "������");
	name.insert(4, "������");

	LinkedList<double> GPA{ };
	// �̸��� ������ �޾Ƽ� ����
	GPA.insert(0, 3.0);
	GPA.insert(1, 4.2);
	GPA.insert(2, 3.9);
	GPA.insert(3, 3.3);
	GPA.insert(4, 4.5);

	double average{ };
	for (auto iter = GPA.begin(); iter != GPA.end(); ++iter) {
		average += *iter;
	}
	average /= 5;
	cout << "5���� �л����� ���� ����� " << average << "�Դϴ�." << endl;
	return 0;
}
