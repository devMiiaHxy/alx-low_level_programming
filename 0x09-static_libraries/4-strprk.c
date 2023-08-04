#include "main.h"
/**
 * _strpbrk - Entry point of my program
 * @x: input variable
 * @yes: input variable
 * Return: Always 0 (success)
 */
char *_strpbrk (char *x, char *yes)
{
	int a;

	while (*x)
	{
		for (a = 0; yes[a]; a++)
		{
			if (*x ==  yes[a])
				return(x);
		}
		x++;
	}
	return ('\0');
}
