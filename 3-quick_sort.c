#include "sort.h"
#include <stdio.h>
/**
 * swapy - a function that swaps
 * the position of 2 elements
 * @x: first element
 * @y: second element
 * Return: void
 */

void swapy(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * Lomuto - a function that implements
 * the Lomuto partition scheme
 * @array: array
 * @mini: the beginning of the array
 * @maxi: the end of the array
 * @size: array size
 * Return: return the pos of the last element sorted
 */

int Lomuto(int *array, int mini, int maxi, int size)
{
	int pivot;
	int loop1, loop2;

	loop1 = (mini - 1);
	pivot = array[maxi];

	for (loop2 = mini; loop2 <= maxi; loop2++)
	{
		if (array[loop2] <= pivot)
		{
			if (loop1 != loop2)
			{
				swapy(&array[loop1], &array[loop2]);
				print_array(array, size);
			}
			loop1++;
		}
	}
	if (array[loop1] != array[maxi])
	{
		swapy(&array[loop1], &array[maxi]);
		print_array(array, size);
	}
	return (loop1);
}

/**
 * quicksorting - a function that sorts the array
 * @array: the array to be sorted
 * @mini: the beginning of the array
 * @maxi: the end of the array
 * @size: the size of the array to be sorted
 * Return: void
 */

void quicksorting(int *array, int mini, int maxi, int size)
{
	int pos = 0;

	if (mini < maxi)
	{
		pos = Lomuto(array, mini, maxi, size);
		quicksorting(array, mini, pos - 1, size);
		quicksorting(array, pos + 1, maxi, size);
	}
}

/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (size <= 1 || array == NULL)
		return;
	quicksorting(array, 0, size - 1, size);
}
