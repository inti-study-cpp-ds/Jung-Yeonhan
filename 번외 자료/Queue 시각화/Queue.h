#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

constexpr int MAXVALUE{ 10 };

// 원형 큐
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

// 스트림 삽입 연산자(<<)에서 값을 받아오기 위해 public으로 설정
// 가급적 getter, setter 사용을 권장합니다.
public:
	int front;
	int rear;
	int size;
	T* values;
};

template <typename T>
ostream& operator<<(ostream& out, Queue<T>& q) {
	T* temp = q.values;

	// queue 값 출력
	out << "front [ ";
	for (int i = q.front; i < q.rear; i++) {
		out << temp[i];
		if (i < q.rear - 1) out << " | ";
	}
	out << " ] rear" << endl;

	// front의 위치
	for (int i = 0; i < MAXVALUE; i++) {
		if (q.front == i)
			out << "▼";
		else
			out << " ";
	}
	out << endl;

	// 실제 데이터 유무
	for (int i = 0; i < MAXVALUE; i++) {
		if (temp[i] == NULL)
			out << "□";
		else
			out << "■";
	}
	out << endl;
	
	// rear의 위치
	for (int i = 0; i < MAXVALUE; i++) {
		if (q.rear == i)
			out << "▲";
		else
			out << " ";
	}
	out << endl;
	return out;
}
