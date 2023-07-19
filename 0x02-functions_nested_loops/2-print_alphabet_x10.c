#include "main.h"
/*8
  *print_alphabet - Print alphabets x 10
  *
  *Return:void
  */
void print_alphabet_x10(void)
{
	char bx;
	char by;

	for (bx = 0; bx < 10; bx++)
	{
		for (by = 'a'; by <= 'z'; by++)
		{
			_putchar(by);
		}
		_putchar(bx);
		_putchar('\n');
	}
}
