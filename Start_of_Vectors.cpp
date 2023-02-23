// Start_of_Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//These are dynamic size containers.That means , we can resize them in case.
//The memory is managed for us by STL.
//Vectors are generic type, which means ,we can store any data type of element and EVEN OBJECT OF OUR OWN CLASSES.
//VECTORS are part of STL library.

#include <iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> primes;

int main()
{
	//this push_back() is used to add elements in vector array as in vector,elements can be added
	// only from an end, more like a linked-list
	primes.push_back(3);
	primes.push_back(2);
	primes.push_back(1);
	cout << primes.size() << endl;
	//we can use/print element in vector just like in arrays by using [] and providing index.
	//check below.
	cout << primes[1] << endl;
	//we can also re-assign the value in vectors by using index number .
	primes[1] = 23;
	cout << primes[1] << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
