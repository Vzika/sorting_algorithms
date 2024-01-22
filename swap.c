#include "sort.h"

/**
 * swap - swaps values in a DSA.
 *
 *@a: value to be swapped
 *
 *@b: value to be swap with.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
