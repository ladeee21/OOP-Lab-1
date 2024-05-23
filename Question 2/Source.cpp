#include <iostream>
#include "swap.h"
using namespace std;

// ** Question-2 **
	// Write a void function called swap that swaps two int variables passed to it.
	//	a.Use pointers.
	//	b.Use references.

int main() {
	
	cout << "\nQuestion-2:" << endl;

	//initializing the variables
	int num1 = 12;
	int num2 = 51;

	//outputs the two integers before using the pointer swap function
	cout << "Before using the pointer swap function   " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	
	//swaps the two integers using the pointer swap function
	swap(&num1, &num2);

	//outputs the two integers after using the pointer swap function
	cout << "After using the pointer swap function    " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << "\n"<< endl;


	//outputs the two integers before using the reference swap function
	cout << "Before using the reference swap function " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	
	//swaps the two integers using the reference swap function
	swap(num1, num2);

	//outputs the two integers after using the reference swap function
	cout << "After using the reference swap function  " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << endl;
	
	return 0;
}