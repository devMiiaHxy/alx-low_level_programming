#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @z: Character to be iterated over
  * Return: 1 for positive num, -1 for negative num and zero for other
  */
int print_sign(int z)
{
	if (z > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (z < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
