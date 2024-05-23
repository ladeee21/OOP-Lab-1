// Group -3
// Navjeet Kaur
// Omoshalewa Aderibigbe
// Gursharan Patial

#include <iostream>
#include "Max.h"
#define ARRAY_LENGTH 5
using namespace std;

// ** Question-1 **
//Write a function called max that returns the max of two int numbers. 
// Then,create a series of overloaded functions with the same name.
//a.Return the max of three int numbers. 
//b.Return the max of an array of int a[5]. 
//c.Return the max of two arrays : int a[5], int b[5].

int main() {

	
	cout << "Question-1:" << endl;

	//outputs the max of two integers
	cout << "The max of 9 and 7 is " << max(9, 7) << endl;

	//outputs the max of three integers
	cout << "The max of 9, 15, and 71 is " << max(9, 15, 71) << endl;

	//outputs the max of an array
	int arrayOne[ARRAY_LENGTH] = { 10,2,30,4,51 };
	cout << "The max of the array {10, 2, 30, 4, 51} is " << max(arrayOne) << endl;

	//outputs the max of two given arrays
	int arrayTwo[ARRAY_LENGTH] = { 8,70,16,15,41 };
	cout << "The max of the two given arrays is " << max(arrayOne, arrayTwo) << endl;

	
	return 0;
}
