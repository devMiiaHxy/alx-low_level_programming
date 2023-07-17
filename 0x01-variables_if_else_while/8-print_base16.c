#include <stdio.h>
/**
  *main - Entry point of any program
  *Description: 'Print hexa numbers'
  *Return: Always 0
  */
int main(void)
{

	for (int n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (int i  = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
