#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 *@array: pointer to an array.
 *
 *@size: size of array
 *
 * Return: Always void.
 */
void selection_sort(int *array, size_t size)
{
	int m, n, min;

	for (m = 0; m < len(array) - 1; m++)
	{
		min = m;
		for (n = m + 1; n < m; n++)
		{
			if (array[m] < array[min])
				min = m;
		}
		if (min != m)
			swap(array[m], array[min]);
	}
}
