#include "lists.h"

/**
 * free_listint - releases memory for list
 * @head: variable for linked list to release memory
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
