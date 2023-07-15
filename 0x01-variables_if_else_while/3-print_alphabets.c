#include <stdio.h>
/**
  *main - Entry point of a program
  *Description: 'prints capital and small letter alphabets'
  *Return: Always 0
  */
int main(void)
{
	int n = 65;
	int y = 97;

	while (y <= 122)
	{
		putchar(y);
		y++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
