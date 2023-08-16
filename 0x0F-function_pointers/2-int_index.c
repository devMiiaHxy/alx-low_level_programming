#include "function_pointers.h"
/**
 * int_index - if true, return index iteration value
 * @arr: array variable value
 * @size: amount value of array
 * @cmp: funtion pointer for one 3 en main
 * Return: 0 (success)
 */
int int_index(int *arr, int size, int (*cmp)(int))
{
	int i;

	if (arr == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(arr[i]))
			return (i);
	}
	return (-1);
}
