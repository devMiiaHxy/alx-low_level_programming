#include "main.h"

/**
 * rot13 - encodes string
 * @n: string to input
 * Return: string converted
 */

char *rot13(char *n)
{
	int x;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *make = n;

	while(*n)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*n == rot13[x])
			{
				*n = ROT13[x];
				break;
			}
		}
		n++;
	}
	return (make);
}
