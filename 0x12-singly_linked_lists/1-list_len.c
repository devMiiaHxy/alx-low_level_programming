#include <stdlib.h>
#include "lists.h"

/**
 * list_len - amount of values of data struct
 * @h: parameter
 *
 * Return: int value
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
