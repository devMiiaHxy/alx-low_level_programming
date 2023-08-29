#include "lists.h"

/**
 * delete_nodeint_at_index - rms specified index of a list node
 * @head: pointer to the first element in the list
 * @index: position to rm node from
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *p = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (i < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		i++;
	}

	p = x->next;
	x->next = p->next;
	free(p);


	return (1);
}
