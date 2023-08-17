#include "main.h"
/**
 * _memset- add value to specfic block of memory
 * @x: memeory address to be filled first
 * @y: char to copy
 * @n: amount of times to copy 'y'
 *
 * Return: new array with new value
 */
char *_memset(char *x, char y, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		x[i] = y;
	}
	
	return (x);
}
