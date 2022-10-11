#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - function that sorts an array
 * of integers in ascending order
 * @array: pointer to the array
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i <= size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (k != i)
		{
			swap(array, i, k);
			print_array(array, size);
		}
	}
}
