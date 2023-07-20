#include <stdio.h>
#include "main.h"
/**
  * main - prints biggest prime number 0f 612852475143
  * Return: Always 0 (success)
  **/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 00) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
