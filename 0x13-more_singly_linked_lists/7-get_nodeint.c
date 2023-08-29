#include "lists.h"

/**
 * get_nodeint_at_index - specified index value for node access
 * @head: first node of list
 * @index: specified node
 *
 * Return: ptr to index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	
	listint_t *p = head;

	while (p && x < index)
	{
		p = p->next;
		x++;
	}

	return (p ? p : NULL);

}
