#pragma once
#include "Node.h"

template <typename T>
class Iterator {
public:
	Iterator(Node<T>* p = nullptr) : cur{ p } { }
	Iterator& operator++() {
		cur = cur->next;
		return *this;
	}
	T& operator*() {
		return cur->elem;
	}
	bool operator==(const Iterator& ref) {
		return cur == ref.cur;
	}
	bool operator!=(const Iterator& ref) {
		return cur != ref.cur;
	}

private:
	Node<T>* cur;
};