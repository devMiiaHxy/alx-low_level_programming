#include "main.h"
/**
 * _strncat - function that joins 2 srings together
 * @dest: destination string ponter
 * @src: string pointer of source
 * @n : number of bytes required
 *
 *Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
int string_length, x;

string_length = 0;
while (dest[string_length] != '\0')
{
	string_length++;
}
for (x = 0; x < n && src[x] != '\0'; x++, string_length++)
{
	dest[string_length] = src[x];
}
dest[string_length] = '\0';
return (dest);
}

