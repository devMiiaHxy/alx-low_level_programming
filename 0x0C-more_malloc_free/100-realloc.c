#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @let: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *let, unsigned int old_size, unsigned int new_size)
{
	char *let1;
	char *old_let;
	unsigned int i;

	if (new_size == old_size)
		return (let);

	if (new_size == 0 && let)
	{
		free(let);
		return (NULL);
	}

	if (!let)
		return (malloc(new_size));

	let1 = malloc(new_size);
	if (!let1)
		return (NULL);

	old_let = let;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			let1[i] = old_let[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			let1[i] = old_let[i];
	}

	free(let);
	return (let1);
}
