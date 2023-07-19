#include "main.h"
/**
  * jack_bauer - prints all the minutes of Jack Bauer day
  *Return: ...
  */
void jack_bauer(void)
{
	int x, y, z, n;
	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
					{
						for (z = 0; z <= 5; z++)
						{
						for (n = 0; n <= 9; n++)
						{
						_putchar(x + '0');
						_putchar(y + '0');
						_putchar(58);
						_putchar(z + '0');
						_putchar(n + '0');
						_putchar('\n');
						}
						}
						}
						}
						}
}

