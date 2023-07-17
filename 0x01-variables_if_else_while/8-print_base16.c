#include <stdio.h>
/**
  *main - Entry point of any program
  *Description: 'Print hexa numbers'
  *Return: Always 0
  */
int main(void)
{
	int n = 48;
	int x = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (x <= 102)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
