#include "sort.h"

/**
 * insertion_sort_list - The function to sort a doubly
 * linked list
 * @list: The doubly link list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = (*list)->next, *cur, *prev;

	while (head != NULL)
	{
		if (head->n < head->prev->n)
		{
			cur = head;
			while (cur->prev != NULL && cur->n < cur->prev->n)
			{
				prev = head->prev;
				if (prev->prev != NULL)
					prev->prev->next = cur;
				else
					*list = cur;
				if (cur->next != NULL)
					cur->next->prev = prev;
				prev->next = cur->next;
				cur->next = prev;
				cur->prev = prev->prev;
				prev->prev = cur;
				print_list(*list);
			}
		}
		head = head->next;
	}
}
