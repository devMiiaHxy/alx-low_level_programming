#include "main.h"

/**
 * get_bit - prints dec num at specified index
 * @n: variable of num to find through iteration
 * @index: spec index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

