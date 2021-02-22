#pragma once


// ���ø� Ŭ����
// �ϳ��� Ÿ���� �ް� ������ ������ �ϳ��� ���� �ް� ����.
// Array<�� Ÿ��, �迭�� ũ��> ��ü�̸� �̷������� ������ �� �ְ� �������.
template <typename T, size_t N>
class Array {
public:
	// �� ������ �޾� ��ü�� �����ϱ� ���� ������
	Array();
	Array(Array&);
	Array(T[]);
	Array(T, ...);

	// �����Ҵ��� storage�� delete ��Ű�� �Ҹ���
	~Array() {
		delete[] storage;
	}

	// []������ �����ε�
	// []�����ڸ� �̿��� ���� ��ȯ�� �� �ְ� ��.
	T& operator[](size_t idx) {
		return storage[idx];
	}
	Array& operator=(Array&);

	// array�� ũ�� ��ȯ
	size_t size() {
		return N;
	}
	bool isEmpty();

private:
	// array�� ���� ������ ����� ������
	T* storage;
};

// ���ø��� �⺻������ ������Ÿ�ӿ� ���� �ϼ��Ǿ�� �ϹǷ�
// ���ø� Ŭ���� ���� �ϴܿ� Array.hpp������ ������ ���Խ�����
#include "Array.hpp"