#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;
	for (i = 0; i < (int)size - 1; i++)
	{
		for (j = 0; j < (int)size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
