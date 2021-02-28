#pragma once
#include "LinkedList.h"
using std::cout;
using std::endl;

template <typename T>
LinkedList<T>::LinkedList()
	: head{ new Node<T> }, tail{ new Node<T> }, size{ } {
	head->next = tail;
}


template<typename T>
LinkedList<T>::~LinkedList() {
	delete head;
	delete tail;
}

template<typename T>
void LinkedList<T>::insert(int index, T elem) {
	Node<T>* newNode = new Node<T>{ nullptr, elem };
	if (head->next == tail) {
		head->next = newNode;
		newNode->next = tail;
	}
	else {
		int i = 0;
		for (Node<T>* temp = head; temp != tail; temp = temp->next, ++i) {
			if (index == i) {
				newNode->next = temp->next;
				temp->next = newNode;
			}
		}
	}
}

template<typename T>
inline void LinkedList<T>::print() {
	// 여기서 auto는 컴파일 타임에 LinkedList<T>::iterator로 치환된다.
	for (auto iter = begin(); iter != end(); ++iter) {
		cout << *iter << endl;
	}
}


