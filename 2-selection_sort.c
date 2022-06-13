#include "sort.h"
#include "0-bubble_sort.c"

/**
 *selection_sort - selection
 *@array : int arrat
 *@size : size
 */

void selection_sort(int *array, size_t size)
{
	int i, j;
	int min;

	for (i = 0; i < (int)size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
			swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
