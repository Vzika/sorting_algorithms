#include "sort.h"

/**
 *max - calculates the maximum element of the array
 *@array: array from which we calculate the maximum
 *@n: size of the array
 *Return: None
 */

int max(int array[], int n)
{
	int max_value = array[0];
	int i;

	for (i = 0; i < n; i++)
	{
		if (array[i] > max_value)
			max_value = array[i];
	}
	return (max_value);

}

/**
 *count_sort - function that sorts using count mechanism
 *@arr: the array to be sorted
 *@n: size of the array to be sorted
 *@pos: position to start the sorting from
 *Return: None
 */

void count_sort(int arr[], int n, int pos)
{
	int count_arr[10];
	int *new_arr;
	int i;

	new_arr = (int *)malloc(n * sizeof(int));
	if (new_arr == NULL)
	{
		exit(1);
	}

	for (i = 0; i < 10; i++)
	{
		count_arr[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		count_arr[(arr[i] / pos) % 10]++;
	}
	for (i = 1; i < 10; i++)
	{
		count_arr[i] = count_arr[i] + count_arr[i - 1];
	}
	for (i = n - 1; i >= 0; i--)
	{
		new_arr[--count_arr[(arr[i] / pos) % 10]] = arr[i];
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = new_arr[i];

	}

	free(new_arr);
}

/**
 *radix_sort - funtion that sorts usinf radix method
 *@array: array to be sorted
 *@size: size of the array to be sorted
 *Return: None
 */

void radix_sort(int *array, size_t size)
{

	size_t max_value = max(array, size);
	int pos;

	for (pos = 1; max_value / pos > 0; pos *= 10)
	{
		count_sort(array, size, pos);
		print_array(array, size);
	}



}
