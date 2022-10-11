#include "sort.h"

/**
 * swap - swap
 * @array: pointer to the array
 * @a: index
 * @b: index
*/

void swap(int *array, size_t a, size_t b)
{
	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}
