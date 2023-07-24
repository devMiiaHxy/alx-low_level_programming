#include <stdio.h>
/**
 * print_array - function that prints x elements o. array of no
 * @x: input array
 * @y: Length of array
 *
 */

void print_array(int *x, int y)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < y; index_of_array++)
	{
		printf("%d", x[index_of_array]);
		if (index_of_array != (y - 1))
		{
			printf(", ");
		}
		putchar('\n');
	}
}
