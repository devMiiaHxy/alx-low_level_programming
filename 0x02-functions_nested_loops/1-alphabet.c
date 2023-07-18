#include <stdio.h>
/**
  *main - Entry point of any program
  *Description: 'Print the alphabets'
  *Return: Always 0
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
