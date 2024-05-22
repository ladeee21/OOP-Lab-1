
#include "Max.h"

// function to return the max of two integers
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

// function to return the max of three integers
int max(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else {
		return c;
	}
}

// function to return the max of an array
int max(int a[5]) {
	int maximum_value = a[0]; // initialising maximum value for the first element of the array
	for (int i = 0; i < 5; i++) {
		if (a[i] > maximum_value) {
			maximum_value = a[i];
		}
	}
	return maximum_value;
}

// function to return the max of two arrays
int max(int a[5], int b[5]) {
	int maximum_value = a[0]; //  initialising maximum value for the first element of the first array
	for (int i = 0; i < 5; i++) {
		if (a[i] > maximum_value) {
			maximum_value = a[i];
		}

	}
	maximum_value = b[0]; // initialising maximum value for the first element of the second array
	for (int i = 0; i < 5; i++) {
		if (b[i] > maximum_value) {
			maximum_value = b[i];
		}
	}
	return maximum_value;
}