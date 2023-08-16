#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - outputs actions
 * @argc: arguments amount given depending on amount passed by program
 * @argv: pointer in form of arrays to args variable
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *ab;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	ab = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(ab) == NULL || ab[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ab == '/' && y == 0) ||
	    (*ab == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ab)(x, y));

	return (0);
}
