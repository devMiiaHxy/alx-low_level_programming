#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates and returns the addition of all its paramters.
 * @n: amount of parameters being handed to the function.
 * @...: A variable number of paramters to derive the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
