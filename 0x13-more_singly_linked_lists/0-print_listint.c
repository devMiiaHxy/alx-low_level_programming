 #include "lists.h"

/**
 * print_listint - outputs values contained in list structure
 * @h: type
 *
 * Return: nodes amount
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
