#include "sort.h"

/**
 * count - counts the number of element in an array
 * @n: the array to count
 */
int count(int *n)
{
	int i = 0;

	while (n[i] != 0)
		i++;
	return (i - 1);
}

/**
 * partition - is used to swap and return the pivot of the array
 * @n: the array
 * @start: the startindex of the array
 * @end: the end index of the array
 * Return: Returns the pivot index of the array
 */
int partition(int *n, int start, int end)
{
	int pivot = n[end];
	int i = start - 1, tmp, j;

	for (j = start; j <= end - 1; j++)
	{
		if (n[j] < pivot)
		{
			i++;
			tmp = n[i];
			n[i] = n[j];
			n[j] = tmp;
		}
	}
	i++;
	tmp = n[i];
	n[i] = n[end];
	n[end] = tmp;
	print_array(n, count(n));
	return (i);
}

/**
 * quick - short for quick sort
 * @n: the array
 * @start: the startindex of the array
 * @end: the end index of the array
 */
void quick(int *n, int start, int end)
{
	int pivot;

	if (end <= start)
		return;
	pivot = partition(n, start, end);
	quick(n, start, pivot - 1);
	quick(n, pivot + 1, end);
}

/**
 * quick_sort - A function to sort an array using the
 * quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array/length
 */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1);
}
