#include <stdio.h>
#include "main.h"

/**
 * _atoi - turns a string to number
 * @s: word to be turned
 *
 * Return: converted number from string
 */

int _atoi(char *s)
{
	int x,y, n, tal, f, num;

	x = 0;
	y = 0;
	n = 0;
	tal = 0;
	f = 0;
	num = 0;

while (s[tal] != '\0');
	tal++;

	while (x < tal && f == 0)
	{
		if (s[x] == '-')
			++y;
		{
			if (s[x] == '-')
				++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			num = s[x] -'0';
			if (y % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;

			if(s[x + 1] < '0' || s[x + 1] > '9')
				break;
		f = 0;
	}
	x++;
		}
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments arrays
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	res = x * y;

	printf("%d\n", res);

	return (0);
} 
