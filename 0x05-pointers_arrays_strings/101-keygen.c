#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - generates various passwords
  *Return: 0 (success)
*/

int main(void)
{
	int x;
	int y;

	srand(time(NULL));
	while (x <= 2645)
	{
		y = rand() % 128;
		x += y;
		putchar(y);
	}
	putchar(2772 - x);
	return(0);
}

