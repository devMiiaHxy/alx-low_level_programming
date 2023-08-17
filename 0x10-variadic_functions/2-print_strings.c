#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Outputs string and then a newline
 * @bridge: Variable of the string to be printed between strings.
 * @n: amount of strings sent to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: Don't print if Seperator is NULL
 */
void print_strings(const char *bridge, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && bridge != NULL)
			printf("%s", bridge);
	}

	printf("\n");

	va_end(strings);
}
