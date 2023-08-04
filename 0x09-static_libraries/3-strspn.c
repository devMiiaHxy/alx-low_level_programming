#include "main.h"
/**
 * _strspn - Entry point of program
 * @x: input variable
 * @yes: input variable
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *x, char *yes)
{
	unsigned int n = 0;
	int r;

	while (*x)
	{
		for (r = 0; yes[r]; r++)
		{
			if (*x == yes[r])
			{
				n++;
				break;
			}
			else if (yes[r + 1] == '\0')
				return (n);
		}
		x++;
	}
	return (n);
}
