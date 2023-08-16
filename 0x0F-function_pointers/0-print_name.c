#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - output by function pointer
 * @x: variable value to add
 * @y: function pointer
 * Return: nil
 **/
void print_name(char *x, void (*y)(char *))
{
	if (x == NULL || y == NULL)
		return;

	y(x);
}

