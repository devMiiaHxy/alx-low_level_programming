#include "main.h"
/**
 * _memcpy - copy memory area!
 * @dest: memory location
 * @src: copy memory!
 * @n: bytes amount
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src,unsigned int n)
{
	int x = 0;
	int i = n;

	for(; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
