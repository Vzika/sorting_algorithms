#include <stdio.h>
#include <stddef.h>
#include "sort.h"
/**
 *swap - a function that swaps two integers
 *@a: fist integer to be swapped
 *@b: second integer to be swapped 
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*buble_sort - sorts intehers by bubling out the highest
 *@array: the array to be sorted
 *@size: the size of the array
 *Description: print the array after sorting
 */

void bubble_sort(int *array, size_t size)
{
	size_t flag;
	size_t i;
	size_t j;

	for(i = 0; i < size; i++)
	{
		flag =0;

		for(j = 0; j < size -i; j++)
		{
			if(array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
				print_array(array, size);
				flag =1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}


}

