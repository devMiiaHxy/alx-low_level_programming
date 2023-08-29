#include "lists.h"

/**
 * listint_len - amout of values in list returned
 * @h: variable to traverse with
 *
 * Return: x
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
