#pragma once

template <typename T>
struct Node {
private:
	Node* next;
	T elem;
public:
	template <typename T> friend class LinkedList;
	template <typename T> friend class Iterator;
	Node() : next{ nullptr }, elem{ } { }
	Node(Node* next, T elem) : next{ next }, elem{ elem } {}
};