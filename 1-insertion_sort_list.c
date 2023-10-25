#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: the double linked list to be sorted using the function
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *following;

	if (*list == NULL || list == NULL)
		return;
	following = (*list)->next;
	while (following != NULL)
	{
		while (following->prev && following->prev->n > following->n)
		{
			following->prev->next = following->next;
			if (following->next != NULL)
			{
				following->next->prev = following->prev;
			}
			following->next = following->prev;
			following->prev = following->next->prev;
			following->next->prev = following;
			if (following->prev == NULL)
			{
				*list = following;
			}
			else
				following->prev->next = following;

			print_list(*list);
		}
		following = following->next;
	}
}
