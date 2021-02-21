#pragma once
#include <iostream>
using std::string;

struct Item {
private:
	string name;
	int price;
	int quantity;

public:
	Item() 
		: name{ "" }, price{ 0 }, quantity{ 0 } { }
	Item(string name, int price, int quantity)
		: name{ name }, price{ price }, quantity{ quantity } { }


	string get_name() {
		return name;
	}
	void set_name(string name) {
		this->name = name;
	}

	int get_price() {
		return price;
	}
	void set_price(int price) {
		this->price = price;
	}

	int get_quantity() {
		return quantity;
	}
	void set_quantity(int quantity) {
		this->quantity = quantity;
	}
};
