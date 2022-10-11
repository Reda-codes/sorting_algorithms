#include "sort.h"


/**
 * bubble_sort - function that sorts an
 * array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: pointer to array
 * @size: number of elements
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, l = size;
	short int swap;
	int tmp;

	do {
	swap = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				swap = i;
				print_array(array, l);
			}
		}
		size = swap;
	} while (size >= 1);

}
