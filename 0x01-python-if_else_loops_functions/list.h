#ifdef LISTS_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - linked list
 * @s: number
 * @next: move to the next node
 *
 * Description: structure for a linked list
 */
typedef struct listint_s
{
	int s;
	struct listint_s *next;
}
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *iinsert_node(listint_t **head, int number);

#endif
