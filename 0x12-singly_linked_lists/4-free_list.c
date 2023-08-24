#include <stdlib.h>
#include "lists.h"

/**
 * free_list - linked list memory freeing
 * @head: value
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
