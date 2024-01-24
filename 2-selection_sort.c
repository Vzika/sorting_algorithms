#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * @array: array of integers to be sorted 
 * @size: size of the array to be sorted
 *
 * Description: In ascending, order print the array after each time
 *  you swap two elements
 *
 * Return: None
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, lowest;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		lowest = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[lowest])
				lowest = j;
		if (lowest != i)
		{
			temp = array[i];
			array[i] = array[lowest];
			array[lowest] = temp;
			print_array(array, size);
		}
	}
}
