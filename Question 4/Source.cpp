// Group -3
// Navjeet Kaur
// Omoshalewa Aderibigbe
// Gursharan Patial

#include <iostream>
#include "Multiplication.h"
#define ARRAY_LENGTH 5
using namespace std;


// ** Question-4 **
//Write a function called multiply that has three int arguments and returns the product of three numbers. 
// The last argument should have a default value = 1. 

//	a.) Add another function that has the same name and has only two double arguments
//	b.) Can you add another third function that has the same name and has
//	two arguments : multiply(int, int) and call it as follows multiply(2, 3) ?
//	Why or why not? Add your answer as a comment in your code.


int main() {


	cout << "\nQuestion-4: \n";

	//outputs the product of 3 integers
	cout << "The product of 4 * 15 * 7 is " << multiply(4, 15, 7) << endl;

	//outputs the product of two doubles
	cout << "The product of 0.5 * 4.5  is " << multiply(0.5, 4.5) << endl;

	// b. We cannot add another function with same parameters, becuase whenever the function is called, then a conflict will arise with the 
	// existing function multiply(int, int, int). This will happen because the compiler will not be able to distinguish between these two functions.
	
	// For example: If we will have another function as 
	// int multiply(int a, int b){
	// return a*b;
	//}
	// Then when calling the two functions, the compiler will get confused between 
	// int multiply (int a, int b, int c=1){
	// return a*b*c;
	// }
	// and int multiply(int a, int b){
	// return a*b;
	//}. Therefore, there will be conflict

	return 0;
}
