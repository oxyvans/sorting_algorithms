#include "sort.h"

/**
 * insertion_sort_list - sort in bubalu
 *
 * @list: The array to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_s *sorted = NULL;
	listint_s *current = *list;

	while(current != NULL)
	{
		listint_s *next = current->next;
		current->prev = current->next = NULL;
		sorted_Insert(&sorted, current);
		print_list(sorted);
		current = next;
	}
	*list = sorted;
}

/**
 * sorted_Insert - aux
 *
 * @sorted: aux
 * @current: aux
 */

void sorted_Insert(listint_s **sorted, listint_s *new_n)
{
	listint_s *current;

	if (*sorted == NULL)
		*sorted = new_n;
	else
	{
		if ((*sorted)->n >= new_n->n)
		{
			new_n->next = *sorted;
			new_n->next->prev = new_n;
			*sorted = new_n;
		}
		else
		{
			current = *sorted;
			while((current->next != NULL) && (current->next->n < new_n->n))
			{
				current = current->next;
			}

		}
	}
}
