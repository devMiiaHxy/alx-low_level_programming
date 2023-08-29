#include "lists.h"

/**
 * free_listint2 - releases memory
 * @head: variable for pointer of list
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}

	*head = NULL;
}

