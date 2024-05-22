// Group -3
// Navjeet Kaur
// Omoshalewa Aderibigbe
// Gursharan Patial

#include <iostream>
#include "Multiplication.h"
#define ARRAY_LENGTH 5
using namespace std;

// writing a function called multiply with three int arguments and another function with two double arguments.

int main() {



	cout << "\nQuestion-4: \n";

	cout << "The product of 4 * 15 * 7 is " << multiply(4, 15, 7) << endl;

	cout << "The product of 0.5 * 4.5  is " << multiply(0.5, 4.5) << endl;

	// b. We cannot add another function with same parameters, becuase whenever the call be given, then a conflict will arise with the 
	// existing function multiply(int, int, int). This will happen because the compiler will not be able to distinguish between these two functions.
	// 
	// For example: If we will have another function as 
	// int multiply(int a, int b){
	// return a*b;
	//}
	// Then when calling, the compiler will get confuse between int multiply (int a, int b, int c=1){
	// return a*b*c;
	// } and  int multiply(int a, int b){
	// return a*b;
	//}  this functions.

	return 0;
}
