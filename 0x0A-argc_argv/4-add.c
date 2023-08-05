#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - int iterator
 * @str: str array variiable
 *
 * Return: Always 0 (success)
 */

int check_num(char *str)
{
	unsigned int x;
	x = 0;

	while (x < strlen(str))
	{
		if (!(isdigit(str[x])))
		{
			return (0);
		}

	x++;

	}

	return (1);
}

/**
 * main - Entry point
 * @argc: number counter
 * @argv; Args
 *
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int c;
	int str_to_int;
	int total;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			str_to_int = atoi(argv[c]);
			total += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", total);

	return (0);
}
