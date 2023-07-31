#include "main.h"
/**
 * _memset- add value to specfic block of memory
 * @x: memeory address to be filled first
 * @y: wanted value
 * @n: amount of bytes to be adjusted
 *
 * Return: new array with new value
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
