#include "TestClass.h"
#include <iostream>
using namespace std;
ostream& operator<<(ostream& os, TestClass & tc)
{
	os << "a: " << tc.a << "\tb: " << tc.b << endl;
	return os;
}
