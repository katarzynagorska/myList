#include <string>
#include <iostream>
#pragma once
using namespace std;

class TestClass {
public:
	TestClass() {};
	TestClass(int _a, double _b) : a(_a), b(_b) {};
	~TestClass() {};
	void setA(int _a, double _d) { a = _a; b = _d; };
	friend ostream& operator<< (ostream& os, TestClass &tc);
private:
	int a;
	double b;

};
