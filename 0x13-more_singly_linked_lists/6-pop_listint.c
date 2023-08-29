#include "lists.h"

/**
 * pop_listint - removes a node of linked list
 * @head: variable for ptr of 0th index of list elements
 *
 * Return: rm'ed data value
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int j;

	
	if (!head || !*head)
		return (0);

	j = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;


	return (j);
}
