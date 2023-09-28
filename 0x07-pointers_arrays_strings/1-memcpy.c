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
	for (int a = 0; a < x; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
