#include "sort.h"
/**
 * max - funtion that calculates the maximum integer
 * @array: the array from which the maximum is found
 * @size: size of the array
 * Return: returns maximum value
 */
int max(int *array, int size)
{
	int max_value = array[0];
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max_value)
			max_value = array[i];
	}
	return (max_value);
}

/**
 * counting_sort - sorts algorithm using counting method
 * @array: array to be sorted
 * @size: size of the array
 * Return: Returns None
 */
void counting_sort(int *array, size_t size)
{
	int k, i, j;
	int *count_arr, *new_arr;

	if (array == NULL || size < 2)
		return;
	new_arr = (int *)malloc(sizeof(int) * size);
	if (new_arr == NULL)
	{
		return;
	}
	k = max(array, size);
	count_arr = (int *)malloc(sizeof(int) * (k + 1));
	if (count_arr == NULL)
	{
		free(new_arr);
		return;
	}
	for (i = 0; i < (k + 1); i++)
	{
		count_arr[i] = 0;
	}
	for (j = 0; j < (int)size; j++)
	{
		count_arr[array[j]]++;
	}
	for (i = 0; i < (k + 1); i++)
	{
		count_arr[i] = count_arr[i] + count_arr[i - 1];
	}
	print_array(count_arr, k + 1);
	for (i = size - 1; i >= 0; i--)
	{
		new_arr[--count_arr[array[i]]] = array[i];
	}
	for (j = 0; j < (int)size; j++)
	{
		array[j] = new_arr[j];
	}
	free(new_arr);
	free(count_arr);
}


