#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arguments amount
 * @argv: arguments array variable
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
