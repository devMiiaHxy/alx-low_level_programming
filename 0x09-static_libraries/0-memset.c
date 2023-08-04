#include "main.h"

/**
 * _memset - fills memory with params
 * @x:memory address to add value
 * @y: wanted params
 * @n: bytes amout to manipulate
 *
 * Return: changed array
 */

char *_memset(char *x, char y, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		x[i] = y;
		n--;
	}
	return (x);
}
