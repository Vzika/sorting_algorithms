#include "sort.h"

/**
 * to_swap - a function that swap two integers in an array.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 */
void to_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - a function that sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;

	if (array == NULL || size < 2)
		return;

	for (interval = 1; interval < (size / 3);)
		interval = interval * 3 + 1;

	for (; interval >= 1; interval /= 3)
	{
		for (i = interval; i < size; i++)
		{
			j = i;
			while (j >= interval && array[j - interval] > array[j])
			{
				to_swap(array + j, array + (j - interval));
				j -= interval;
			}
		}
		print_array(array, size);
	}
}
