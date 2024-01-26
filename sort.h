#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */

#define UP 0
#define DOWN 1


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
void swap(int *a, int *b);
int max(int array[], int n);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
void count_sort(int arr[], int n, int pos);
void radix_sort(int *array, size_t size);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_sort(int *array, size_t size);
#endif
