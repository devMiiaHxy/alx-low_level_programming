#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of every program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
