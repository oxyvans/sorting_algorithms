#include "sort.h"

/**
 * bubble_sort - sort in bubalu
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;

	for (i = 0; i < (int)size - 1; i++)
	{
		for (j = 0; j < ((int)size - i - 1); j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
	}
}

/**
 * swap - swap
 *
 * @x: int 1
 * @y: int 2
 */

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
