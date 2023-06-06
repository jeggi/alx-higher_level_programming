#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: list in the link to check
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *high = list;
	listint_t *low = list;

	if (!list)
		return (0);

	while (low && high && high->next)
	{
		low = low->next;
		high = high->next->next;
		if (low == high)
			return (1);
	}

	return (0);
}
