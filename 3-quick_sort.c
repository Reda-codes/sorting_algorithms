#include "sort.h"
/**
 *  quick_sort - function that sorts an array of integers in ascending order
 *  @array: Array pointer
 *  @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort(array, 0, size - 1, size);
}

/**
 *  sort - Sorting.
 *  @array: Array.
 *  @prev: previous number.
 *  @next: next number.
 *  @size: Size.
 */
void sort(int *array, int prev, int next, int size)
{
	int arr;

	if (prev < next)
	{
		arr = split_array(array, prev, next, size);
		sort(array, prev, arr - 1, size);
		sort(array, arr + 1, next, size);
	}
}

/**
 *  split_array - split the array.
 *  @array: Array.
 *  @prev: previous number.
 *  @next: next number.
 *  @size: Size.
 *  Return: int
 */
int split_array(int *array, int prev, int next, int size)
{
	int mv, tmp;

	for (mv = prev; mv < next; mv++)
	{
		if (array[mv] < array[next])
		{
			tmp = array[prev];
			array[prev] = array[mv];
			array[mv] = tmp;
			if (prev != mv)
				print_array(array, size);
			prev++;
		}
	}
	tmp = array[next];
	array[next] = array[prev];
	array[prev] = tmp;
	if (prev != next)
	{
		print_array(array, size);
	}

	return (prev);
}
