#include "main.h"

/**
 * factorial - calculate factoial
 * @n : parameter to take in
 * Return: fatorial value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
