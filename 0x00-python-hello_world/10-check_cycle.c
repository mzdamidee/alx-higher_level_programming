#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 * If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);

	current = list->next;
	check = list->next->next;

	while (current && check && check->next)
	{
		if (current == check)
			return (1);

		current = current->next;
		check = check->next->next;
	}
	return(0);
}
