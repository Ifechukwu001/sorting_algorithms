#include "sort.h"

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 * @array: Array to be sorted.
 * @size: Size of the array.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n, lstable;
	int temp, swapped;

	n = size;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		for (i = 0, j = i + 1; i < n && j < n; i++, j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);

				swapped = 1;
				lstable = j;
			}
		}
		n = lstable;
	}
}
