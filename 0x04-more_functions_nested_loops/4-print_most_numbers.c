#include "main.h"

/**
  * print_most_numbers - prints numbers 01356789
  * Return:void
  */
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if(!(x == '2' || x == '4'))
			_putchar(x);
	}
	_putchar('\n');
}

