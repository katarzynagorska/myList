#include <iostream>
#include <ctime>
#include "mylist.h"

#pragma once
template <typename T> class myList;

//Wêze³ listy
template <typename T> class myNode {

	friend class myList<T>;

public:
	myNode(T);
	myNode();
	T getData() { return data; }
	double getCreationTime();

private:
	T data;
	myNode* next;
	clock_t creation;
};

template <typename T>
myNode<T>::myNode(T _data)
{
	data = _data;
	next = NULL;
	creation = clock();
}

template <typename T>
myNode<T>::myNode() {
	next = NULL;
	creation = clock();
}

template <typename T>
double myNode<T>::getCreationTime() {
	double t;
	return t = (double)(creation) / (double)(CLOCKS_PER_SEC) * 1000;
}
