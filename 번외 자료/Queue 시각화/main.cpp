#include <iostream>
#include "Queue.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	Queue<int> q{ };
	int select;

	while (true) {
		cout << q;
		cout << "1. enqueue\t2. dequeue\t3. Á¾·á" << endl;
		cin >> select;
		switch (select) {
		case 1:
			q.enqueue(1);
			cout << q;
			system("pause");
			break;
		case 2:
			q.dequeue();
			cout << q;
			system("pause");
			break;
		default:
			return 0;
		}
		system("cls");
	}
	return 0;
}

