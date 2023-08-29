#include "lists.h"

/**
 * add_nodeint_end - appends new node
 * @head: pointer to the first element in the list
 * @n: variable of value to add
 *
 * Return: ptr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *x = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (x->next)
		x = x->next;

	x->next = i;

	return (i);
}
