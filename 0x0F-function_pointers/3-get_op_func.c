#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - chooses function based on operation selected
 * @x: argument variable
 *
 * Return: Pointer
 */
int (*get_op_func(char *x))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *x)
		i++;

	return (ops[i].f);
}


