#include <stdio.h>
#include "main.h"

/**
  *main - Entry point of every program
  *
  * Description: print integers from 1-100 with
  * fizz for multiples of 3 and buzz for multiples
  * of 5 and FizzBuzz for multiples of both
  * Return: always 0
  */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%x", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
