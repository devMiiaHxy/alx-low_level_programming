#include <unistd.h>
/**
  * _putchar - writes alphabet x to stdout
  *@x: Alphabet to print
  *
  *Return: If success, return 1
  *on error, -1 is returned and errno is set appropriately
  */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
