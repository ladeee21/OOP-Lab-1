// Group -3
// Navjeet Kaur
// Omoshalewa Aderibigbe
// Gursharan Patial

#include <iostream>
#define ARRAY_LENGTH 5
using namespace std;
#include "header.h"

// ** Question-3 **
//Use the function overloading to write a function called swap that swaps two Location structs.
//a.Use pointers
//b.Use references


int main() {


	cout << "\nQuestion-3:" << endl;

	//initializing location struct 1
	Location location1;
	location1.latitude = 25;
	location1.longitude = 40;

	//initializing loaction struct 2
	Location location2;
	location2.latitude = 50;
	location2.longitude = 80;

	//outputs the two location structs before using the pointer swap function
	cout << "Before using the pointer swap function: location1   =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;
	
	//swaps the two loaction structs using the pointer swap function
	swap(&location1, &location2);

	//outputs the two location structs after using the pointer swap function
	cout << "After using the pointer swap function: location1    =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	//outputs the two location structs before using the reference swap function
	cout << "Before using the reference swap function: location1 =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;
	
	//swaps the two location structs using the reference swap function
	swap(location1, location2);

	//outputs the two location structs after using the reference swap function
	cout << "After using the reference swap function: location1  =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	return 0;
}
