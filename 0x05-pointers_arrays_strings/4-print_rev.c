#include "main.h"

/**
 * print_rev - function that outputs a string in reverse.
 * @s: used string pointer for reference
 * Returns: 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
