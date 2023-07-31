#include "main.h"
/**
 * _memcpy - function that can duplicate
 * @dest: memory storage
 * @src: location to copy from
 * @x: variable for amount of bytes
 *
 * Return: memory copied with x byte
 */

char *_memcpy(char *dest, char *src, unsigned int x)
{
	int a = 0;
	int b = x;
	for (; a < b; a++)
	{
		dest[a] = src[a];
		x--;
	}
	return (dest);
}
