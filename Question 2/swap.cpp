#include "swap.h"

//implementation of the swap function using pointers
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//implementation of the swap functions using reference
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
