#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - appends new data structure
 * @head: argument/parameter pointer
 * @str: latest value
 *
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *f;
	unsigned int len = 0;

	while (str[len])
		len++;

	f = malloc(sizeof(list_t));
	if (!f)
		return (NULL);

	f->str = strdup(str);
	f->len = len;
	f->next = (*head);
	(*head) = f;

	return (*head);
}
