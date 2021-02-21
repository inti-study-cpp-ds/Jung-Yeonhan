#pragma once

template <typename T, size_t N>
class Array {
public:
	Array();

	size_t get_size() {
		return N;
	}

private:
	T* storage;
};


#include "ArrayClass.hpp"