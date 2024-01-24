#include "sort.h"

/**
 * swap - a function that swap two integers in an array.
 * @a: The first integer to be swaped.
 * @b: The second integer to be swapped.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heapify - a function to build binary heap
 * @array: array of integers to be sorted.
 * @size: size of the array to be sorted
 * @base: The index of the base row of the tree.
 * @i: The root node of the binary tree.
 */
void heapify(int *array, size_t size, size_t base, size_t i)
{
	size_t left, right, large;

	left = 2 * i + 1;
	right = 2 * i + 2;
	large = i;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != i)
	{
		swap(array + i, array + large);
		print_array(array, size);
		heapify(array, size, base, large);
	}
}

/**
 * heap_sort - Sort an array of integers in ascending
 *             order using the heap sort algorithm.
 * @array: array of integers to be sorted
 * @size: size of array to be sorted
 *
 * Description: Implements the sift-down heap sort
 * algorithm. Prints the array after each swap.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap(array, array + i);
		print_array(array, size);
		heapify(array, size, i, 0);
	}
}
