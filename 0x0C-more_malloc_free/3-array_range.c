#include <stdlib.h>
#include "main.h"

/**
 * *array_range - spuns integer consisting arrays
 * @min: minimum values in memory
 * @max: maximum values in memory
 *
 * Return: some pointer
 */
int *array_range(int min, int max)
{
	int *let;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	let = malloc(sizeof(int) * size);

	if (let == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		let[x] = min++;

	return (let);
}
