#pragma once
#include "ArrayClass.h"

template <typename T, size_t N>
Array<T, N>::Array() {
	storage = new T[N];
}
