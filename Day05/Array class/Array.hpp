#pragma once
#include <cstdarg> // 가변인자 함수 사용을 위한 매크로 포함
#include "Array.h" // 평범한 클래스 처럼 선언부를 포함

// 비어있는 array 생성자
template <typename T, size_t N>
Array<T, N>::Array()
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = 0;
	}
}

// array 복사 생성자
template<typename T, size_t N>
Array<T, N>::Array(Array& arr)
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = arr[i];
	}
}

// 기본 자료형으로 있는 배열을 이용한 생성자
template<typename T, size_t N>
Array<T, N>::Array(T arr[])
	: storage{ new T[N] } {
	for (int i = 0; i < N; ++i) {
		*(storage + i) = arr[i];
	}
}

// 가변인자 함수를 이용한 생성자
// 기본 자료형으로 있는 배열처럼 여러개의 값을 받을 수 있음.
template<typename T, size_t N>
Array<T, N>::Array(T args, ...)
	: storage{ new T[N] } {
	va_list ap{ nullptr };
	va_start(ap, args);

	*storage = args;
	for (int i = 1; i < N; ++i) {
		*(storage + i) = va_arg(ap, T);
	}

	va_end(ap);
}

// 대입 연산자 오버로딩
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

// array를 0부터 N까지 순회하며 비어있는지 아닌지 판단
template<typename T, size_t N>
bool Array<T, N>::isEmpty() {
	for (int i = 0; i < N; ++i)
		if (*(storage + i) != 0)
			return false;
	return true;
}

