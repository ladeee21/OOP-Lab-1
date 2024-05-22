

#include <iostream>
#include "Max.h"
#define ARRAY_LENGTH 5
using namespace std;

//Write a function called max that returns the max of two int numbers. Then,create a series of overloaded functions with the same name.

int main() {

	
	cout << "Question-1:" << endl;

	cout << "The max of 9 and 7 is " << max(9, 7) << endl;

	cout << "The max of 9, 15, and 71 is " << max(9, 15, 71) << endl;

	int arrayOne[ARRAY_LENGTH] = { 10,2,30,4,51 };
	cout << "The max of the array {10, 2, 30, 4, 51} is " << max(arrayOne) << endl;

	int arrayTwo[ARRAY_LENGTH] = { 8,70,16,15,41 };
	cout << "The max of the two given arrays is " << max(arrayOne, arrayTwo) << endl;

	
	return 0;
}
