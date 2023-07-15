#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point of every C program
  *Explanation: 'main method return option is void'
  *Description: 'Looping over positive and negative numbers'
  *Return : always 0;
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
