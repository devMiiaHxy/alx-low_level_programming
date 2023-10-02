#include "main.h"

/**
 * flip_bits - does tracking
 * @n: variable
 * @m: variable
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, track = 0;
	unsigned long int now;
	unsigned long int a = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = a >> x;
		if (now & 1)
			track++;
	}

	return (track);
}
