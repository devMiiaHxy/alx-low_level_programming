#include "main.h"

/**
 * binary_to_uint - turns to unsigned int from binary
 * @b: variable str for  binary number
 *
 * Return: unsigned int variable
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bi_num = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		bi_num = 2 * bi_num + (b[x] - '0');
	}

	return (bi_num);
}
