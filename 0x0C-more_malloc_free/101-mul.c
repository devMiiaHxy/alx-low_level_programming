#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a !number variable of char
 * @x: variable to iterate
 *
 * Return: 0 if !number is found, else Return 1
 */
int is_digit(char *x)
{
	int n = 0;

	while (x[n])
	{
		if (x[n] < '0' || x[n] > '9')
			return (0);
		n++;
	}
	return (1);
}
/**
 * _strlen - length of string variable is return value
 * @x: string to evaluate
 *
 * Return: string length variable
 */
int _strlen(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - cross checks for errors/mistakes
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - positive number multiplied by another positive number
 * @argc: args amount
 * @argv: args array declaration
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
