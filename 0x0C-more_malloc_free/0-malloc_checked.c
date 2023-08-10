#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory to allocate
 * @b: number of bytes to allocate
 *
 * Return: let
 */
void *malloc_checked(unsigned int b)
{
	void *let;

	let = malloc(b);

	if (let == NULL)
		exit(98);

	return (let);
}
