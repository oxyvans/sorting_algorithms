#include "sort.h"
#include "0-bubble_sort.c"

/**
 *quick_sort - selection
 *@array : int arrat
 *@size : size
 */

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
/**
 *quickSort - selection
 *@arr : int arrat
 *@low : l
 *@high : h
 *@size :size
 */
void quickSort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 *partition - selection
 *@arr : int arrat
 *@low : l
 *@high : h
 *@size : size
 *Return: i
 */

int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (arr[i] != arr[j])
				print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	if (arr[j++] != arr[high])
		print_array(arr, size);
	return (i + 1);
}
