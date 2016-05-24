#include "TestClass.h"
#include "mylist.h"
#include <vector>
#include <iostream>
using namespace std;



int main() {
	cout << endl << double(clock()) << endl;

	myList<int> myints;
	
	//time testy
	for (int i = 0; i <= 7; i++) {
		myints.push_back(10 * i);
		cout << i << ". wezel stworzono w czasie ";
		cout << myints.nodeCreationTime(i) << endl;
			for (int k = 0; k < 10000; k++) {
				for (int j = 0; j < 10000; j++)
					;
			}
	};

	for (int i = 0; i <= 7; i++) {
		myints.push_front(-3 * i);
	}
	myints.print(); cout << endl << endl;

	//insert
	myints.insert(2, 5);
	myints.print(); cout << endl << endl;
	myints.insert(4, 15);
	myints.print(); cout << endl << endl;
	myints.insert(6, 25);
	myints.print(); cout << endl << endl;
	myints.insert(myints.size(), 35);
	myints.print(); cout << endl << endl;
	myints.insert(myints.size()+1, 78);
	myints.print(); cout << endl << endl;

	int itr = 10;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;
	
	itr = 5;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;
	
	itr = 8;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;

	itr = 0;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;
	/*myList <TestClass> myclasslist;
	for (int i = 0; i < 10; i++)
	{
		TestClass tc(i + 1, double(10 * i) + double(i) / 8);
		myclasslist.push_back(tc);
	}

	cout << "Lista:" << endl;
	myclasslist.print();

	cout << "Usuwam:\n";
	myclasslist.pop_back();
	myclasslist.print();

	cout << "Usuwam:\n";
	myclasslist.pop_back();
	myclasslist.print();

	cout << "Usuwam:\n";
	myclasslist.pop_back();
	myclasslist.print();*/

	////Usuwanie z listy
	//cout << "Lista przed usunieciem: " << endl;
	//for (int i = 0; i < myints.size(); i++) 
	//		cout << i << ": " << myints[i] << " ";
	//
	//cout << endl << "------------------" << endl;

	//myints.print();
	//

	//myints.pop_back(); 
	//
	//cout << "Lista po usunieciu: " << endl;
	//for (int i = 0; i < myints.size(); i++)
	//	cout << i << ": " << myints[i] << " ";

	//cout << endl << "------------------" << endl;

	//myints.print();
	//	
	//myints.pop_back();

	//cout << "Lista po usunieciu: " << endl ;
	//for (int i = 0; i < myints.size(); i++) 
	//		cout << i << ": " << myints[i] << " ";
	//
	//cout << endl << "------------------" << endl;

	//myints.print();


	cout << endl << double(clock()) << endl;
	getchar();
	return 0;
}