#include "swap.h"
//implementation
 
// function to swap two integers using pointers
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//function to swap two integers using reference
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
