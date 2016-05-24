#pragma once
#include <iostream>
#include <ctime>
#include "mynode.h"

template <typename T> class myNode;

//Lista
template <typename T> class myList {
public:
	myList();
	~myList();

	void push_back(T data);
	void push_front(T data);
	void pop_back();
	void pop_front();
	void insert(int idx, T data);
	void erase(int idx);

	void print();

	bool empty();
	int size() { return _size; };

	T& begin();
	T& end();
	T& operator[](int idx);

	double nodeCreationTime(int idx); //return node cration time

private:
	myNode<T> *last, *first;
	int _size;
};

template <typename T>
myList<T>::myList()
{
	last = NULL;
	first = NULL;
	_size = 0;
}

template<typename T>
myList<T>::~myList()
{
	if (!empty()) // List is not empty
	{
		myNode<T> *currentPtr = first;
		myNode<T> *tempPtr;

		while (currentPtr != 0) // delete remaining nodes
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->next;
			delete tempPtr;
		}
	}
}

template <typename T>
void myList<T>::print() 
{
	int itr = 0;
	myNode<T> *currentPtr = first;
	while (currentPtr)
	{
		cout << itr++ << ". " << currentPtr->data << endl;
		currentPtr = currentPtr->next;
	}
	cout << endl << endl << "last emlement: " << last->data << endl << "list size: " << size() << endl << endl;
}

template <typename T>
bool myList<T>::empty()
{
	return ((last == NULL) && (first == NULL));
}

template <typename T>
void myList<T>::push_back(T data)
{
	myNode<T> *newPtr = new myNode<T>(data);
	if (empty())	//Jeœli pusta to ostatni element 
	{
		last = newPtr;
		first = newPtr;
	}
	else //Jeœli istnieje wstawiamy za ostatnim
	{
		last->next = newPtr;
		last = newPtr;
	}
	_size++;
}

template <typename T>
void myList<T>::push_front(T data) {
	myNode<T> *newNode = new myNode<T>(data);
	newNode->next = first;
	first = newNode;
	_size++;
}

template <typename T>
void myList<T>::pop_front() {
	if (!empty()) {
		myNode<T> *tmpPtr = first;
		first = first->next;
		delete tmpPtr;
		_size--;
	}
}

template <typename T>
void myList<T>::pop_back()
{
	if (!empty()) // List is not empty
	{
		myNode<T> *currentPtr = first;
		while (currentPtr->next->next)
		{
			currentPtr = currentPtr->next;
		}	
		
		delete currentPtr->next;
		last = currentPtr;
		last->next = NULL;

		_size--;

	}
}

template <typename T>
void myList<T>::insert(int idx, T data)
{
	if ((idx > _size)|| (idx < 0))
	{
		//throw (std::out_of_range)
		cout << "out of range" << endl;
	}
	else if (idx == _size)
	{
		push_back(data);
		_size++;
	}
	else if (idx == 0)
	{
		push_front(data);
		_size++;
	}
	else
	{
		myNode<T> *currentPtr = first;
		myNode<T> *tmp;
		myNode<T> *newNode = new myNode<T>(data);
		for (int i = 0; i < idx - 1; i++)
		{
			currentPtr = currentPtr->next;
		}
		tmp = currentPtr->next;
		currentPtr->next = newNode;
		newNode->next = tmp;
		_size++;
	}
}

template <typename T>
void myList<T>::erase(int idx) {
	if (idx > _size-1)
	{
		//throw (std::out_of_range)
		cout << "out of range" << endl;
	}
	else if (idx == _size - 1)
	{
		pop_back();
	}
	else if (idx == 0)
	{
		pop_front();
	}
	else
	{
		myNode<T> *toErase;
		myNode<T> *currentPtr = first;
		for (int i = 0; i < idx - 1; i++)
		{
			currentPtr = currentPtr->next;
		}

		toErase = currentPtr->next;
		currentPtr->next = currentPtr->next->next;

		delete toErase;

		_size--;

	}
}

template <typename T>
T& myList<T>::operator[](int idx) {

	if ((idx > size() - 1) || (idx < 0))
	{
		throw out_of_range("index out of range");
		return last->next->data;
	}
	else
	{

		myNode<T> *currentPtr = first;
		for (int i = 0; i < idx; i++)
		{
			currentPtr = currentPtr->next;
		}
		return currentPtr->data;
	}
}
template <typename T>
T& myList<T>::begin()
{
	return first->data;
}

template <typename T>
T& myList<T>::end()
{
	return last->data;
}

template <typename T>
double myList<T>::nodeCreationTime(int idx)
{
	myNode<T> *currentPtr = first;
	for (int i = 0; i < idx; i++)
	{
		currentPtr = currentPtr->next;
	}
	return currentPtr->getCreationTime();
}