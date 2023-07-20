#include "main.h"

/**
* _isupper - Checks uppercase alphabets
* @x: The alphabet to be iterated over
* Return: 1 for uppercase alphabet or 0  for non-uppercase
*/

int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);
}
return (0);
}
