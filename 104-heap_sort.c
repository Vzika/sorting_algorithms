#include <stdio.h>
#include "sort.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b  = temp;

}

void heapify(int array[], size_t size, size_t i)
{
	size_t largest_index = i;
	size_t left_index = 2*i;
	size_t right_index = 2*i+1;
	while(left_index <= size && array[(int)left_index > array[(int)largest_index]])
	{
		largest_index = left_index;
	}
	while(right_index <= size && array[(int)right_index] > array[(int)largest_index])
	{
		largest_index = right_index;
	}
	if(largest_index != i)
	{
		swap(&array[largest_index], &array[i]);
		print_array(array, size);
		heapify(array, size, largest_index);
	}
}
void heap_sort(int *array, size_t size)
{
	size_t i;
	for(i = size/2; i > 0; i--)
	{
		heapify(array,size,i);
	}
	for(i = size; i >1; i--)
	{
		swap(&array[0], &array[i-1] );
		print_array(array,size);
		heapify(array, i-1, 1);
	}
}

