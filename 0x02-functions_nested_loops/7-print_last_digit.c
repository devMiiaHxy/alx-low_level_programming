#include "main.h"
/**
  * print_last_digit - print number last digit
  * @t: Number to be iterated over
  * Return: Value of last int of a number
  */
int print_last_digit(int t)
{
	int last;

	last = t % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
