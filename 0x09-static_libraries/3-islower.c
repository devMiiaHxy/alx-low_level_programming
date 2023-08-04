#include "main.h"

/**
  * _islower - Checks lower case alphabets
  * @x: The alphabet to be iterated over
  * Return: 1 for lowercase alphabet or 0  for non-lowercase
  */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
