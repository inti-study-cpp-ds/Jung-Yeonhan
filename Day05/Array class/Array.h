#pragma once


// 템플릿 클래스
// 하나는 타입을 받고 있으며 나머지 하나는 값을 받고 있음.
// 이런식으로 템플릿에 타입이 아닌 값이 들어가는 경우를 템플릿 메타 프로그래밍이라 부름
// Array<들어갈 타입, 배열의 크기> 객체이름 이런식으로 선언할 수 있게 만들어줌.
template <typename T, size_t N>
class Array {
public:
	// 각 값들을 받아 객체를 생성하기 위한 생성자
	Array();
	Array(Array&);
	Array(T[]);
	Array(T, ...);

	// 동적할당한 storage를 delete 시키는 소멸자
	~Array() {
		delete[] storage;
	}

	// []연산자 오버로딩
	// []연산자를 이용해 값을 반환할 수 있게 함.
	T& operator[](size_t idx) {
		return storage[idx];
	}
	Array& operator=(Array&);

	// array의 크기 반환
	size_t size() {
		return N;
	}
	bool isEmpty();

private:
	// array에 들어온 값들이 저장될 포인터
	T* storage;
};

// 템플릿은 기본적으로 컴파일타임에 식이 완성되어야 하므로
// 템플릿 클래스 선언 하단에 Array.hpp파일의 내용을 포함시켜줌
#include "Array.hpp"

// 추가 설명:
// 컴파일이란 우리가 쓴 C++코드를 기계어로 번역하는 과정을 말하는데,
// 프로그램이 생성되기 위해서는 컴파일과 링크라는 과정이 필요하다.
// 링크란 컴파일 된 소스코드들을 하나의 파일로 합치는 과정이다.
// 이 두 과정을 합친 과정을 빌드 라고 부르며,
// 이 때, 컴파일 타임이란 링크를 제외한 컴파일하는 때만을 의미한다.
// 따라서 이런식으로 구현부를 include해주어야 컴파일 타임때
// Array.h와 Array.hpp파일이 하나의 파일처럼 컴파일 되게 된다.
