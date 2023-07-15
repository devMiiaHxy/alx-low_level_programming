#include <stdio.h>
/**
  *main- Entry point of any program
  *Description: 'Print every letter except q & e'
  *Return: Always return 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 && n == 113)
		{
			continue;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
