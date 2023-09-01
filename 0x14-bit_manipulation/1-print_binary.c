#include "main.h"

/**
 * print_binary - outputs num
 * @n: var of value to convert
 */

void print_binary(unsigned long int n)
{
	int x, track = 0;
	unsigned long int now;

	for (x = 63; x >= 0; x--)
	{
		now = n >> x;

		if (now & 1)
		{
			_putchar('1');
			track++;
		}
		else if (track)
			_putchar('0');
	}
	if (!track)
		_putchar('0');
}
