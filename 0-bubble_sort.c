#include "sort.h"
/**
 * swap - A function that swaps two integers
 * @a: Fist integer to be swapped
 * @b: Second integer to be swapped
 * Return: None
 *
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts intehers by bubling out the highest
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: None
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t flag;
	size_t i;
	size_t j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		flag = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}


}
