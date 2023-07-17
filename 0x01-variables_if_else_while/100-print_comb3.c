#include <stdio.h>
/*
  *main- Entry point of any program
  *Description: 'Printing numbers'
  *Return: Always 0
  */
int main(void)
{
	int n = 0;
	int x = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
