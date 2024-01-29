#include "sort.h"

/**
 * lomuto_partition - partitions an array.
 *
 *@array: pointer to an array.
 *
 *@size: size of array
 *
 *Return: Returns current index..
 */
int lomuto_partition(int *array, size_t size, int lb, int ub)
{
	int *pivot, j;
	int i, temp, *a, *b;
	
	pivot = array + ub;
	for (i = j = lb; i < ub; i++)
	{
		if (array[i] < *pivot)
		{
			if (j < i)
			{
				a = array + i;
				b = array + j;
				temp = *a;
				*a = *b;
				*b = temp;
				print_array(array, size);
			}
			j++;
		}
	}
	if (array[j] > *pivot)
	{
		b = array + j;
		temp = *b;
		*b = *pivot;
		*pivot = temp;
		print_array(array, size);
	}
	return (j);
}

/**
 * quick_sort - sorts an array of integers in ascending order.
 *
 *@array: pointer to array to be sorted.
 *
 *@size: array size.
 *
 *Return: Always void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	if (size > 1)
	{
		lomuto_sort(array, size, 0, size - 1);
	}
}

void lomuto_sort(int *array, size_t size, int lb, int ub)
{
	int index2;

	if (ub - lb > 0)
	{
		index2 = lomuto_partition(array, size, lb, ub);
		lomuto_sort(array, size, lb, index2 - 1);
		lomuto_sort(array, size, index2 + 1, ub);
	}
}
