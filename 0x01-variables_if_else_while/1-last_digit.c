#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description: 'last didgit of number'
  *Return: always 0
  */
int main(void)
{
	int n;
	int digits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digits = n % 10;
	if (digits > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digits);
	}
	else if (digits == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digits);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, digits);
	}
	return (0);
}
