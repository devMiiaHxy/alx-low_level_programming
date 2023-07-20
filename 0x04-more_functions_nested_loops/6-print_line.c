#include "main.h"
/**
  * print_line -output a stright line
  * @x: number of iteration
  * Return: Always 0 (Success)
  */

void print_line(int x)
{
	int y;

	for (y = 0; y < x; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
