#include "main.h"
/**
  * print_numbers - print int from 0-9
  * Return: Always 0
  */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
