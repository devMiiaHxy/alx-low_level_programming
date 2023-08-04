#include "main.h"

/**
 * _strcpy - copies pointed string
 * @dest: char type string
 * Description: copy string pointer points too
 * 
 * Return; Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	}
	while (src[x] != '\0');

	return (dest);
}
