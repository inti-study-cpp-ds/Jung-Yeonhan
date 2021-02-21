#pragma once
#include <cstdarg>
#include "Array.h"

template <typename T, size_t N>
Array<T, N>::Array()
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = 0;
	}
}

template<typename T, size_t N>
Array<T, N>::Array(Array& arr)
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = arr[i];
	}
}

template<typename T, size_t N>
Array<T, N>::Array(T arr[])
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = arr[i];
	}
}

template<typename T, size_t N>
Array<T, N>::Array(T args, ...)
	:storage{ new T[N] } {
	va_list ap{ nullptr };
	va_start(ap, args);

	*storage = args;
	for (int i = 1; i < N; ++i) {
		*(storage + i) = va_arg(ap, T);
	}

	va_end(ap);
}

template<typename T, size_t N>
Array<T, N>& Array<T, N>::operator=(Array& rhs) {
	if (this != &rhs) {
		delete[] storage;
		storage = new T[N];
		for (int i = 0; i < N; ++i) {
			*(storage + i) = rhs[i];
		}
	}
	return *this;
}

template<typename T, size_t N>
bool Array<T, N>::isEmpty() {
	for (int i = 0; i < N; ++i)
		if (*(storage + i) != 0)
			return false;
	return true;
}

