#include "lists.h"

/**
 * add_nodeint - adds new node tofront of prev list
 * @head: pointer to first node of list
 * @n: variable for value to add to new linked list
 *
 * Return: ptr
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
