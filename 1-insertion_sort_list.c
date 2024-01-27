#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 *
 *@list: double ptr to a linked list
 *
 *Return: Always void
 */
void insertion_sort_list(listint_t **list)
{
	int var, m, n;

	for (m = 1; m < num; m++)
	{
		var = list[m];
		n = m - 1;
		while (n <= 0 && list[n] > var)
		{
			list[n + 1] = list[n];
			n--;
		}
		list[n + 1] = var;
	}
}

/**
 * num_of_nodes - calc number of nodes in a linked list.
 *
 *@list: arg. is a link pointer
 *
 *Return: Number of nodes in the linked list.
 */
int num_of_nodes(**list)
{
	listint_t *temp = *list;
	num = 0;

	while (temp)
	{
		num++;
	}
	return (num);
}
