#include <stdio.h>
/**
  *main - Entry point of any program
  *Description: 'Prints different combination of numbers'
  *Return: Always 0;
  */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;

	if (n == 56)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
