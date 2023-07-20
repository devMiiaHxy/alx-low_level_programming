#include <unistd.>
/**
  * _putchar - writes alphabet c to stdout
  *@x: Alphabet to print
  *
  *Return: If success, return 1
  *on error, -1 is returned and errno is set appropriately
  */
int _putchar(char x)
{
	return (write(1, &c, 1));
}
