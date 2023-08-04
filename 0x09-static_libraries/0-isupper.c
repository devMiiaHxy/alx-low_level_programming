#include "main.h"

/**
 * _isupper - letters to uppercase
 * @x: character  to iterate over
 *
 * Return: 0 or other (success)
 */

int _isupper(int x)
{
	if(x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
