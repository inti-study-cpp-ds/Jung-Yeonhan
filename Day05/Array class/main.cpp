#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array<int, 5> classNum{12171850, 12181825, 12191831, 12201862, 12211882};
	Array<double, 5> GPA{ 3.0, 4.2, 3.9, 3.3, 4.5 };
	Array<const char *, 5> name{ "������", "������", "������", "������", "������" };

	double average = (GPA[0] + GPA[1] + GPA[2] + GPA[3] + GPA[4]) / 5;
	cout << "5���� �л����� ���� ����� " << average << "�Դϴ�." << endl;

	return 0;
}