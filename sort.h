#ifndef SORT_H
#define SORT_H

/*---HEADER---*/
#include<stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b) ;
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
int max(int array[], int n);
void count_sort(int arr[], int n, int pos);
void radix_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif
