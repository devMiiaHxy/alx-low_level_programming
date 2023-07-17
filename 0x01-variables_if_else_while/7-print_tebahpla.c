#include <stdio.h>
/**
  *main - Entry point of every program
  *Description: 'Prints alphabets in reverse'
  *Return: Always 0
  */
int main(void)
{
	for (int n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
