#pragma once

template <typename T>
class MultiTable {
public:
	MultiTable();

	void print();
	void calculator(T, T);

private:
	int m_dan;
	int m_gob;
};

#include "MultiTable.hpp"
