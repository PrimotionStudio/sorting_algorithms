#include "sort.h"

/**
 * selection_sort - Usign selection sort method
 * to sort an array in c, COOL!!!
 * @array: The array to be sorted
 * @size: The lenght of the array
 */
void selection_sort(int *array, size_t size)
{
	int mn, mni, tmp, i, j;

	for (i = 0; i < (int)size; i++)
	{
		for (j = i; j < (int)size; j++)
		{
			if (j == i || array[j] < mn)
			{
				mn = array[j];
				mni = j;
				if (j == i)
					continue;
			}
		}
		if (array[i] != mn && i != mni)
		{
			tmp = array[i];
			array[i] = mn;
			array[mni] = tmp;
			print_array(array, size);
		}
	}
}
