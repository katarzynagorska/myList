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
	}

	myints.push_back(1);
	myints.print();
	myints.pop_back();
	myints.print();

	cout << "Time testing" << endl << endl;
	for (int i = 0; i <= 7; i++) {
		cout << i << ". wezel stworzono w czasie ";
		cout << myints.nodeCreationTime(i) << endl;
	}
	cout << "Time testing" << endl << endl;

	cout << "push_back tests" << endl;
//	myints.print(); cout << endl << endl;
	for (int i = 0; i <= 7; i++) {
		myints.push_front(-3 * i);
	}	
	cout << "push_front tests" << endl;
//	myints.print(); cout << endl << endl;

	myints.pop_front(); myints.pop_front();
	cout << endl << "pop_front tests" << endl;
//	myints.print(); cout << endl << endl;

	myints.pop_back(); myints.pop_back();  myints.pop_back();
	//cout << "pop_back tests" << endl;
	//myints.print(); cout << endl << endl;
//
	//copying tests
	cout << "Copying tests" << endl << endl;
	myList<int>mycopy(myints);
	mycopy = myints;

	cout << endl << "Print tests:" << endl;
	mycopy.print();

	cout << endl << "indexing test" << endl;
	for (int i = 0; i < mycopy.size(); i++)
		cout << mycopy[i] << endl;



	for (int i = 0; i < myints.size(); i++) {
		cout << i << ". wezel myints stworzono w czasie ";
		cout << myints.nodeCreationTime(i) << " ms od rozpoczecia dzialania programu"<< endl ;
	}
	cout << endl;
	for (int i = 0; i < mycopy.size(); i++) {
		cout << i << ". wezel mycopy stworzono w czasie ";
		cout << mycopy.nodeCreationTime(i) << " ms od rozpoczecia dzialania programu"<< endl;
	}
	cout << "mother:" << endl << endl;
	myints.print(); cout << endl << endl;
	cout << "copy:" << endl << endl;
	mycopy.print(); cout << endl << endl;

	cout << "Changing mother" << endl << endl;
	myints.push_back(111); myints.push_back(113); myints.push_back(117);
	myints.pop_front();	myints.pop_front(); myints.pop_front();
	myints.insert(5, 5); myints.insert(6, 7);
	myints.erase(myints.size()/2);
	cout << "mother:" << endl << endl;
	myints.print(); cout << endl << endl;
	cout << "copy:" << endl << endl;
	mycopy.print(); cout << endl << endl;


	cout << "Changing copy" << endl << endl;
	mycopy.push_front(111); mycopy.push_front(113); mycopy.push_front(117);
	mycopy.pop_back();	mycopy.pop_back(); 
	mycopy.insert(2, 3); mycopy.insert(3, 4);
	mycopy.erase(myints.size() / 3);
	cout << "mother:" << endl << endl;
	myints.print(); cout << endl << endl;
	cout << "copy:" << endl << endl;
	mycopy.print(); cout << endl << endl;


	//insert
	cout << endl << "insert test" << endl;
	cout << endl << "insert test : idx ==0 " << endl;
	myints.print(); myints.insert(0, 2); myints.print();
	cout << endl << "insert test : idx ==size() " << endl;
	myints.print(); myints.insert(myints.size(), 4); myints.print();
	cout << endl << "insert test : idx in between " << endl;
	myints.print(); myints.insert(myints.size()/2, 6); myints.print();
	cout << endl << "insert test : idx out of range " << endl;
	myints.print(); myints.insert(myints.size()+1, 8); myints.print();
	cout << endl << endl;


	cout << "erase tests: " << endl;
	cout << "erase tests idx == begin " << endl;
	int itr = 0;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;
	
	cout << "erase tests idx == end " << endl;
	itr = myints.size()-1;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;

	cout << "erase tests idx in between" << endl;
	itr = myints.size() / 2;
	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;

	cout << "erase tests idx out of range " << endl;
	itr = myints.size();
//	cout << "Erasing element at " << itr << " index." << endl << "Element to be erased: " << myints[itr] << endl;
	myints.erase(itr);
	myints.print(); cout << endl << endl;
//

	myList <TestClass> myclasslist;
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
	myclasslist.print();

	//Usuwanie z listy
	cout << "Lista przed usunieciem: " << endl;
	for (int i = 0; i < myints.size(); i++) 
			cout << i << ": " << myints[i] << " ";
	
	cout << endl << "------------------" << endl;

	myints.print();
	

	myints.pop_back(); 
	
	cout << "Lista po usunieciu: " << endl;
	for (int i = 0; i < myints.size(); i++)
		cout << i << ": " << myints[i] << " ";

	cout << endl << "------------------" << endl;

	myints.print();
		
	myints.pop_back();

	cout << "Lista po usunieciu: " << endl ;
	for (int i = 0; i < myints.size(); i++) 
			cout << i << ": " << myints[i] << " ";
	
	cout << endl << "------------------" << endl;

	myints.print();

	for (int i = 0; i < 10; i++)
	{
		TestClass tc(i + 1, double(10 * i) + double(i) / 8);
		myclasslist.push_back(tc);
	}
	cout << endl << "push_back" << endl;
	myclasslist.print();
//
	for (int i = 0; i < 5; i++)
	{
		TestClass tc(-1*i + 1, double(5.25 * i) + double(i) / 7);
		myclasslist.push_front(tc);
	}
	cout << endl << "push_front" << endl;
	myclasslist.print();

	for (int i = 0; i < 3; i++)
	{
		myclasslist.pop_back();
	}
	cout << endl << "pop_back" << endl;
	myclasslist.print();

	for (int i = 0; i < 3; i++)
	{
		myclasslist.pop_front();
	}
	cout << endl << "pop_front" << endl;
	myclasslist.print();
	
	TestClass tc(100, 25.3);
	myclasslist.insert(0, tc);
	cout << endl << "insert0" << endl;
	myclasslist.print();

	myclasslist.insert(myclasslist.size(), tc);
	cout << endl << "insertend" << endl;
	myclasslist.print();

	myclasslist.insert(myclasslist.size()+1, tc);
	cout << endl << "insertout" << endl;
	myclasslist.print();
	
	myclasslist.insert(myclasslist.size()/7, tc);
	cout << endl << "insertin" << endl;
	myclasslist.print();

	cout << "erase" << endl;

	myclasslist.erase(0);
	cout << endl << "erase0" << endl;
	myclasslist.print();

	myclasslist.erase(myclasslist.size()-1);
	cout << endl << "eraseend" << endl;
	myclasslist.print();

	myclasslist.erase(myclasslist.size());
	cout << endl << "eraseout" << endl;
	myclasslist.print();

	myclasslist.erase(myclasslist.size() / 3);
	cout << endl << "erasein" << endl;
	myclasslist.print();

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
	myclasslist.print();

	myList<TestClass> newList(myclasslist);

	newList.insert(7, tc);
	newList.erase(3);
	newList.push_back(tc); newList.push_back(tc); newList.push_back(tc);
	newList.pop_front();

	cout << "copy editing - copy:" << endl;
	newList.print();
	cout << "copy editing - original:" << endl;
	myclasslist.print();

	myclasslist.insert(3, tc);
	myclasslist.erase(7);
	myclasslist.push_front(tc); myclasslist.push_front(tc); 
	myclasslist.pop_back(); myclasslist.pop_back();

	cout << "original editing - copy:" << endl;
	newList.print();
	cout << "original editing - original:" << endl;
	myclasslist.print();

	newList = myclasslist;
	newList.print(); myclasslist.print();

	newList.insert(7, tc);
	newList.erase(3);
	newList.push_back(tc); newList.push_back(tc); newList.push_back(tc);
	newList.pop_front();

	cout << "copy editing - copy:" << endl;
	newList.print();
	cout << "copy editing - original:" << endl;
	myclasslist.print();

	myclasslist.insert(3, tc);
	myclasslist.erase(7);
	myclasslist.push_front(tc); myclasslist.push_front(tc);
	myclasslist.pop_back(); myclasslist.pop_back();

	cout << "original editing - copy:" << endl;
	newList.print();
	cout << "original editing - original:" << endl;
	myclasslist.print();


	cout << endl << double(clock()) << endl;
	getchar();
	return 0;
}