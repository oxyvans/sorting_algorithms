#include "sort.h"

/**
 * insertion_sort_list - sort in bubalu
 *
 * @list: The array to be printed
 */

void insertion_sort_list(listint_t **list)
{
	int n;
	listint_t *current = *list, *ptr, *tmp;

	if (current->next == NULL)
		return;
	current = current->next;
	while (current != NULL)
	{
		n = 0;
		ptr = current;
		tmp = current->prev;
		current = current->next;
		while (tmp != NULL && tmp->n > ptr->n)
		{
			n++;
			tmp = tmp->prev;
		}
		if (n != 0)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			if (tmp == NULL)
			{
				tmp = *list;
				ptr->prev = NULL;
				ptr->next = tmp;
				ptr->next->prev = ptr;
				*list = ptr;
			} else
			{
				tmp = tmp->next;
				tmp->prev->next = ptr;
				ptr->prev = tmp->prev;
				tmp->prev = ptr;
				ptr->next = tmp;
			}
		print_list(*list);
		}
	}
}
