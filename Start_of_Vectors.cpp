// Start_of_Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//These are dynamic size containers.That means , we can resize them in case.
//The memory is managed for us by STL.
//Vectors are generic type, which means ,we can store any data type of element and EVEN OBJECT OF OUR OWN CLASSES.
//VECTORS are part of STL library.

#include <iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> primes;

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

	for (int i = 0; i < primes.size(); i++)//print the vectors like a regular array
	{
		cout << primes[i] << " ";
	}
	cout << endl;

	//getting user input for vector arrays.....


	vector<int> arr;
	int n;
	cout << "Enter the size of array" << " " << endl;
	cin >> n;
	int a;
	cout << "Enter the elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr.push_back(a);
	}

	cout << "The array is :-  " << " "; 
	for (int i = 0; i < arr.size(); i++) //printing the array till the number of elements.
	{
		cout << arr[i] << " ";
	}

	//----sorting the array using different Sorting Algorithm------

	//-*-*-*-*-*-*-*-*-*-*-*-----------------------

	//---FIRST WE'LL USE THE "SELECTION" SORT------

	cout << endl;
	cout << "The Sorted array is:-  ";

	//--------TIME COMPLEXITY:-  O(n^2)---------
	for (int i = 0; i < arr.size(); i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i]<<" ";
	}

	cout << endl;
//-----------***********---------------------------

	//------------Sorting using the BUBBLE SORT----------

	vector<int> arry;
	int m;
	int i,j;
	cout << "Enter the size of array for Bubble Sort:---" << " " << endl;
	cin >> m;
	int ar;

	cout << "Enter the elements" << endl;
	for (i = 0; i < m;i++)
	{
		cin >> ar;
		arry.push_back(ar);
	}
	cout << "The array is :-  " << " ";
	for (i = 0; i < arry.size(); i++) //printing the array till the number of elements.
	{
		cout << arry[i] << " ";
	}

	for (i = 0; i < arry.size(); i++)
	{
		for (j = 0; j < arry.size()-1; j++)
		{
			if (arry[j] > arry[j+1])
			{
				swap(arry[j], arry[j+1]);
			}
		}
	}

	cout << endl;
	cout << "Array of Bubble Sort is as follows:---";

	for (int l = 0; l < arry.size(); l++)
	{
		cout << arry[l]<<" ";
	}

	return 0;
}

