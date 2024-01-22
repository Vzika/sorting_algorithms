#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
int max(int array[], int n)
{
	int max_value = array[0];
	int i;
	for(i =0; i< n; i++)
	{
		if(array[i] > max_value)
			max_value = array[i];
	}
	return max_value;

}


void counting_sort(int *array, size_t size)
{
	int k;
	int i;
	size_t j;
	int *count_arr;
	int *new_arr;
	k = max(array,size);

	count_arr = (int*)malloc((k+1) * sizeof(int));
	new_arr = (int *)malloc(size * sizeof(int));
	
	if (new_arr == NULL || count_arr ==NULL)
	{
        	exit(1);
	}

	for(i = 0; i < k; i++)
	{
		count_arr[i] = 0;
	}
	for(j = 0; j < size; j++)
	{
		count_arr[array[j]]++;
	}
	print_array(array,size);
	for(i =1; i <=k; i++)
	{
		count_arr[i] = count_arr[i] + count_arr[i - 1];
	}
	for(i = size-1; i >= 0; i --)
	{
		new_arr[--count_arr[array[i]]] = array[i];
	}
	for(j = 0; j<size; j++)
	{
		array[j] = new_arr[j];
		print_array(array,size);
	}

	free(new_arr);
	free (count_arr);
}
