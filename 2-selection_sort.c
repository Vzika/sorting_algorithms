#include <stdio.h>
#include "sort.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t mini_index;
	for(i = 0; i < size; i ++)
	{
		mini_index = i;

		for(j = i+1; j < size; j++)
		{
			if(array[j] < array[mini_index])
			{
				mini_index = j;
			}			
		
		}

		if(mini_index != i)
		{
			swap(&array[i], &array[mini_index]);
		}
		print_array(array, size);
	}



}
