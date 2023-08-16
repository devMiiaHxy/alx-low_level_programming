#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - outputs each array value
 * @arr: array variable
 * @size: amoount to print
 * @action: pointer to print in regular or hex
 * Return: nil
 */
void array_iterator(int *arr, size_t size, void (*action)(int))
{
	unsigned int x;

	if (arr == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(arr[x]);
	}
}
