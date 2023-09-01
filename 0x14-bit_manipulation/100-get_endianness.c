#include "main.h"

/**
 * get_endianness - verifies for sys type
 *
 * Return: 0 for spec type, other if another
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
