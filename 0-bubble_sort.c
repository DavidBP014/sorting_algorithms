#include "sort.h"

/**
 *bubble_sort - sorts an array of integers in ascending orde
 *@array: the array to be sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int n, swapped;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
