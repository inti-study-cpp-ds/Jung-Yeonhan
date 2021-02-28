#pragma once
#include <iostream>
#include "Iterator.h"
#include "Node.h"

template <typename T>
class LinkedList {
public:
	LinkedList();
	LinkedList(LinkedList&);

	~LinkedList();

	typedef Iterator<T> iterator;
	iterator begin() {
		return iterator(head->next);
	}
	iterator end() {
		return iterator(tail);
	}

	void insert(int, T);

	void print();

private:
	Node<T>* head; // �Ӹ� �� ���� ���
	Node<T>* tail; // ���� �� ���� ���
	int size;
};

#include "LinkedList.hpp"