#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int loop1, loop2, mini;
	int temp;

	if (size <= 1 || array == NULL)
		return;
	for (loop1 = 0; loop1 < size; loop1++)
	{
		mini = loop1;
		for (loop2 = loop1 + 1; loop2 < size; loop2++)
		{
			if (array[loop2] < array[mini])
				mini = loop2;
		}
		if (loop1 != mini)
		{
			temp = array[mini];
			array[mini] = array[loop1];
			array[loop1] = temp;
			print_array(array, size);
		}
	}
}
