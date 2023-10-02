#include "main.h"

/**
 * clear_bit - init. value at index
 * @n: pointer to var. to manipulate
 * @index: spec. index to mani..
 *
 * Return: 1 if success, otherwise for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
