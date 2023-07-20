#include "main.h"
/**
  *print_diagonal - printing lines diagonal
  @x: input parameter
  *
  *Return: void
  */

void print_diagonal(int x)
{
	int a, b;

	if (x <= 0)
		_putchar('\n');
	for (a = 0; a < x; a++)
	{
		for (b = 0; b < 1; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
