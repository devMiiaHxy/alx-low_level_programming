#include "main.h"
/*8
  *print_alphabet - Print alphabets x 10
  *
  *Return:void
  */
void print_alphabet_x10(void)
{
	char bx = 0;
	char by;

	while (bx < 10)
	{
		for (by = 'a'; by <= 'z'; by++)
		{
			_putchar(by);
		}
		_putchar('\n');
		bx++;
	}
}
