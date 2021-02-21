#pragma once

template <typename T, size_t N>
class Array {
public:
	Array();
	Array(Array&);
	Array(T[]);
	Array(T, ...);
	~Array() {
		delete[] storage;
	}

	T& operator[](size_t idx) {
		return storage[idx];
	}
	Array& operator=(Array&);

	size_t size() {
		return N;
	}
	bool isEmpty();

private:
	T* storage;
};


#include "Array.hpp"