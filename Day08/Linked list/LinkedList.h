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
	Node<T>* head; // 머리 쪽 더미 노드
	Node<T>* tail; // 꼬리 쪽 더미 노드
	int size;
};

#include "LinkedList.hpp"