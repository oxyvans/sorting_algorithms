#include "sort.h"
#include "0-bubble_sort.c"

/**
 *selection_sort - selection
 *@array : int arrat
 *@size : size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
