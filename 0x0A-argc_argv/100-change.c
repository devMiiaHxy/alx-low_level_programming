#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry
 * @argc: args amount
 * @argv: args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n,j, res;
	int mon[] = {25, 10, 5, 2, 1};

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= mon[j])
		{
			res++;
			n -= mon[j];
		}
	}

	printf("%d\n", res);
	return (0);
}

