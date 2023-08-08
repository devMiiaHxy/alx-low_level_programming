#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make 2 copies of memory
 * @pat: str variable
 * Return: 0
 */
char *_strdup(char *pat)
{
	char *aaa;
	int i, r = 0;

	if (pat == NULL)
		return (NULL);
	i = 0;
	while (pat[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; pat[r]; r++)
		aaa[r] = pat[r];

	return (aaa);
}
