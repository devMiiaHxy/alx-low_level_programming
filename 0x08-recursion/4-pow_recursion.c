#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function to carry out power operation
 * @x: number to raise to power
 * @y: power value
 *
 * Return: calculation ans
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

