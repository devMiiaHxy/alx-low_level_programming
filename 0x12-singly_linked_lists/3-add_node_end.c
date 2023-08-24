#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends.
 * @head: pointer argument/parameter
 * @str: new value
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *f;
	list_t *p = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	f = malloc(sizeof(list_t));
	if (!f)
		return (NULL);

	f->str = strdup(str);
	f->len = len;
	f->next = NULL;

	if (*head == NULL)
	{
		*head = f;
		return (f);
	}

	while (p->next)
		p = p->next;

	p->next = f;

	return (f);
}
