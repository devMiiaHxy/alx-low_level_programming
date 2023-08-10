#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @x: variable to join
 * @y: varaiable to join alongside
 * @n: bytes mount
 *
 * Return: p
 */
char *string_nconcat(char *x, char *y, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (x && x[len1])
		len1++;
	while (y && y[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	while (i < len1)
	{
		p[i] = x[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		p[i++] = y[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = y[j++];

	p[i] = '\0';

	return (p);
}

