#include "lists.h"

/**
 * sum_listint - operation on summing all values in list
 * @head: first node of list
 *
 * Return: sum op
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}

	return (sum);
}

