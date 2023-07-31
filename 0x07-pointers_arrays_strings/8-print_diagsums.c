#include "main.h"
#include <stdio.h>
/**
 * print_diagsums
 * @x: input variable
 * @size: input variable
 * Return: Always 0
 */
void print_diagsums(int *x, int size)
{
	int a, b, c;

	a = 0;
	b = 0;

	for (c = 0; c < size; c++)
	{
		a =  a + x[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += x[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", a, b);
}
