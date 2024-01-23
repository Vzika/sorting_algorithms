#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two integers
 * @a: First integer to swap
 * @b: Second integer to swap
 * Return: None
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort -  Sorts algorithm using selection method
 * @array: Array to be sorted
 * @size: Size of the array to be sorted
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t mini_index;

	for (i = 0; i < size - 1; i++)
	{
		mini_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mini_index])
			{
				mini_index = j;
			}
		}
		if (mini_index != i)
		{
			swap(&array[i], &array[mini_index]);
		}
		print_array(array, size);
	}
}
