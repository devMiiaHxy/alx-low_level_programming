#include <stdlib.h>
#include "main.h"

/**
 * *_memset - adds information to memory
 * @s: target area of memory
 * @b: variable de char
 * @n: combien de @n variable counter
 *
 * Return: some pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - gives array memory
 * @nmemb: array's number of elements
 * @size: element size
 *
 * Return: some pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *let;

	if (nmemb == 0 || size == 0)
		return (NULL);

	let = malloc(size * nmemb);

	if (let == NULL)
		return (NULL);

	_memset(let, 0, nmemb * size);

	return (let);
}
