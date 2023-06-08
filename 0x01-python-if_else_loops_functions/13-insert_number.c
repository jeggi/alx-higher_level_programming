#include "list.h"
/**
 * insert_node - place a new node in the list
 * @head: head of the lst node
 * @number: the place of the new node
 * Return: address of the new node or NULL if unsuccessful
 */
list_t *insert_node(listint_t **head, int number)
{
	listint_t *brand_new;
	listint_t *current_head;
	listint_t *previous_head;
	
	current_head = *head;
	brand_new = malloc(sizeof(listint_t));

	if (brand_new == NULL)
		return (NULL);

	while (current_head != NULL)
	{
		if (current_head->s > number)
			break;
		previous_head = current_head;
		current_head = current_head->next;
	}
	brand_new->s = number;

	if (*head == NULL)
	{
		brand_new->next = NULL;
		*head = brand_new;
	}
	else
	{
		brand_new->next = current_head;
		if (current_head == *head)
			*head = brand_new;
		else
			h_prev->next = brand_new;
	}
	return (brand_new);
}
