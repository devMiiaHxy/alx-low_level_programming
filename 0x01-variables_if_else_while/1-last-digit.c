#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
  *main - Entry point for every C program
  *Description: 'gets last digit of a number'
  *Return : always 0
int main(void)
{
	int n;
	int digits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digits = n/12;
	if(digits > 5)	
	{
		printf("last digit of %d is %d  and is greater than 5", n, digits);
	}
	else if (digits == 0)
	{
		printf("last digits of %d is %d and it is equal to zero", n. digits);
	}
	else 
	{
		printf("last digit of %d is %d and  less than 6 and not zero")
	}
	return (0);
}
