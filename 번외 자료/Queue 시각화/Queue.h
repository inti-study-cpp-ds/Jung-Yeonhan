#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

constexpr int MAXVALUE{ 10 };

// ���� ť
template <typename T>
class Queue {
public:
	Queue()
		: size{ MAXVALUE }, values{ new T[size] }, front{ }, rear{ } {
		for (int i = 0; i < size; ++i)
			values[i] = NULL;
	}
	~Queue() {
		delete[] values;
	}

	void enqueue(T value) {
		if (!isFull()) {
			values[rear] = value;
			rear = (rear + 1) % size;
		}
		else
			cout << "Queue is Full" << endl;
	}

	void dequeue() {
		if (!isEmpty())
			front = (front + 1) % size;
		else
			cout << "Queue is Empty" << endl;
	}

	bool isEmpty() {
		if (rear == front)
			return true;
		else
			return false;
	}

	bool isFull() {
		if ((rear + 1) % size == front)
			return true;
		else
			return false;
	}

// ��Ʈ�� ���� ������(<<)���� ���� �޾ƿ��� ���� public���� ����
// ������ getter, setter ����� �����մϴ�.
public:
	int front;
	int rear;
	int size;
	T* values;
};

template <typename T>
ostream& operator<<(ostream& out, Queue<T>& q) {
	T* temp = q.values;

	// queue �� ���
	out << "front [ ";
	for (int i = q.front; i < q.rear; i++) {
		out << temp[i];
		if (i < q.rear - 1) out << " | ";
	}
	out << " ] rear" << endl;

	// front�� ��ġ
	for (int i = 0; i < MAXVALUE; i++) {
		if (q.front == i)
			out << "��";
		else
			out << " ";
	}
	out << endl;

	// ���� ������ ����
	for (int i = 0; i < MAXVALUE; i++) {
		if (temp[i] == NULL)
			out << "��";
		else
			out << "��";
	}
	out << endl;
	
	// rear�� ��ġ
	for (int i = 0; i < MAXVALUE; i++) {
		if (q.rear == i)
			out << "��";
		else
			out << " ";
	}
	out << endl;
	return out;
}
