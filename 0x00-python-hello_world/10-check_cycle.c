#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - a  function in C that checks if a singly linked list has a cycle in it.
 * @list: parameter
 * return 0
 */

int check_cycle(listint_t *list)
{
	listint_t *quick,*slow;

	if (!list || !list->next)
		return(0);
	quick = list;
	slow = list;

	while (slow != NULL && quick != NULL && quick->next != NULL)
	{
		slow = slow->next;
		quick = quick->next->next;
		if (slow == quick)
		{
			return (1);
		}
	}

	return 0;
}
