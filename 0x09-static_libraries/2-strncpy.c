#include "main.h"
/**
 *_strncpy.c - a function that copies a string
 *@dest: destination for string pointer
 *@src: source for string
 *@n : bytes required
 *
 *Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int bytes_counts;

for (bytes_counts = 0; bytes_counts < n && src[bytes_counts] != '\0'; bytes_counts++)
dest[bytes_counts] = src[bytes_counts];

for (; bytes_counts < n; bytes_counts++)
dest[bytes_counts] = '\0';

return (dest);
}
