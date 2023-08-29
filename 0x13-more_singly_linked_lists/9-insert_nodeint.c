#include "lists.h"

/**
 * insert_nodeint_at_index - appends new node to list at spec index
 * @head: pointer to first node
 * @idx: new node of linked index
 * @n: value
 *
 * Return: ptr to index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *new;
	listint_t *x = *head;


	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (p = 0; x && p < idx; p++)
	{
		if (p == idx - 1)
		{
			new->next = x->next;
			x->next = new;
			return (new);
		}
		else
			x = x->next;
	}
	return (NULL);
}
