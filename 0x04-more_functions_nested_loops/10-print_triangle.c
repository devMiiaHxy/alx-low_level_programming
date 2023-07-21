#include "main.h"
/**
  *print_triangle- Beginning of program
  *Description: Prints lines
  *@size: size of triangle
  *Return: void
  */

void print_triangle(int size)
{
	int x, y, z;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (z = size - x; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
