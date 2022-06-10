#include "sort.h"

/**
 * insertion_sort_list - sort in bubalu
 *
 * @list: The array to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;

	while(current != NULL)
	{
		listint_t *next = current->next;
		current->prev = current->next = NULL;
		print_list(*list);
		sorted_Insert(&sorted, current);
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

void sorted_Insert(listint_t **sorted, listint_t *new_n)
{
	listint_t *current;

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
			new_n->next = current->next;

			if (current->next != NULL)
				new_n->next->prev = new_n;

			current->next = new_n;
			new_n->prev = current;

		}
	}
}
