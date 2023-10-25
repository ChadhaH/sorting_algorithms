#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int loop1, loop2;
	int temp = 0;

	if (size <= 1 || array == NULL)
		return;

	for (loop1 = 0; loop1 < size; loop1++)
	{
		for (loop2 = 0; loop2 < size - i - 1; loop2++)
		{
			if (array[loop2] > array[loop2 + 1])
			{
				temp = array[loop2];
				array[loop2] = array[loop2 + 1];
				array[loop2 + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
