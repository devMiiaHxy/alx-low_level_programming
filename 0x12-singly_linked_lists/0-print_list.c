#include <stdio.h>
#include "lists.h"

/**
 * print_list - outputs values to std output
 * @h: parameter/argument of pointer
 *
 * Return: int value
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		x++;
	}

	return (x);
}
