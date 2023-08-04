#include "main.h"
#include <stddef.h>

/**
 * _strchr -  Entry point of my program
 * @x: expected value
 * @c: expected value
 * Return: Always 0 (Success)
 */

char *_strchar(char *x, char c)
{
	int i = 0;

	for (;x[i] >= '\0'; x++)
	{
		if (x[i] == c)
			return (&x[i]);
	}
	return (0);
}
