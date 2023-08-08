#include "main.h"
#include <stdlib.h>
/**
 * create_array - initiliaze array
 * @size: array measurement
 * @c: variable of char to initialize
 * Description: write a function to declare arrays
 * Return: 0, otherwise if failed
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

