#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry point of my program
 * @ac: variable for input
 * @av: array 2 pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *pet;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	pet = malloc(sizeof(char) * l + 1);
	if (pet == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		pet[r] = av[i][n];
		r++;
	}
	if (pet[r] == '\0')
	{
		pet[r++] = '\n';
	}
	}
	return (pet);
}
