#include "main.h"

/**
 * infinite_add - addition of 2 numbers
 * @s1: first variable
 * @s2: second variable
 * @t: result
 * @size_l: size of result
 * Return: sum
 *
 */

char *infinite_add(char *s1, char *s2, char *t, int size_l)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_l)
		return (0);
	t[1] = '\0';
	for (k = 1 - l; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = s1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = s2[j] - '0';
		else
			s = 0;
		t[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		t[l + 1] = '\0';
		if (l + 2 > size_l)
			return (0);
		while (l-- >= 0)
			t[l + 1] = t[1];
		t[0] = d + '0';
	}
	return (t);
}

