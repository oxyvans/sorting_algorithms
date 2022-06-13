#include "sort.h"

/**
 * insertion_sort_list - sort in bubalu
 *
 * @list: The array to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *prev;

	if (!list)
		return;

	curr = *list;
	tmp = curr->next;
	while (tmp != NULL)
	{
		curr = tmp;
		tmp = tmp->next;
		prev = curr->prev;
		while (prev != NULL && (curr->n < prev->n))
		{
			if (prev->prev != NULL)
				prev->prev->next = curr;
			curr->prev = prev->prev;
			prev->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = prev;
			curr->next = prev;
			prev->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			prev = curr->prev;
			print_list(*list);
		}
	}
}
