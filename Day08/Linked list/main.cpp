#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::endl;
using std::string;

int main() {
	LinkedList<int> classNum{ };
	// 학번을 값으로 받아서 삽입
	classNum.insert(0, 12171850);
	classNum.insert(1, 12181825);
	classNum.insert(2, 12191831);
	classNum.insert(3, 12201862);
	classNum.insert(4, 12211882);

	LinkedList<string> name{ };
	// 학점 평점을 값으로 받아서 삽입
	name.insert(0, "정연한");
	name.insert(1, "김인하");
	name.insert(2, "박인하");
	name.insert(3, "최인하");
	name.insert(4, "조인하");

	LinkedList<double> GPA{ };
	// 이름을 값으로 받아서 삽입
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
	cout << "5명의 학생들의 평점 평균은 " << average << "입니다." << endl;
	return 0;
}
