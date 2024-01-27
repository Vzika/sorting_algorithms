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
int lomuto_partition(int *array, size_t size)
{
	int pivot = array[size - 1];
	size_t i, temp;
	int j = 0;

	for (i = 1; i < size - 1; i++)
	{
		if (pivot >= array[i] && array[j] > array[i])
		{
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
			j += 1;
		}
	}
	if (size == 2 && array[0] < array[1])
		return (j);
	if (pivot < array[j])
	{
		temp = array[j];
		array[j] = pivot;
		array[size - 1] = temp;
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
	int new_index, upper;

	if (array == NULL || size < 2)
		return;

	if (size > 1)
	{
		new_index = lomuto_partition(array, size);
		quick_sort(array, new_index);
		upper = size - new_index;
		quick_sort(array + new_index + 1, upper - 1);
	}
}
