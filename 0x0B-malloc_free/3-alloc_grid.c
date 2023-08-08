#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid made by iterating
 * @width: variable for how wide
 * @height: variable for how tall
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **pet;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	pet = malloc(sizeof(int *) * height);

	if (pet == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		pet[x] = malloc(sizeof(int) * width);

		if (pet[x] == NULL)
		{
			for (; x >= 0; x--)
				free(pet[x]);

			free(pet);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pet[x][y] = 0;
	}

	return (pet);
}
