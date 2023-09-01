#include "main.h"

/**
 * set_bit - puts bits value at spec. index
 * @n: ptr value to index to manipulate
 * @index: index given initial value
 *
 * Return: 1 if success, otherwise if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
