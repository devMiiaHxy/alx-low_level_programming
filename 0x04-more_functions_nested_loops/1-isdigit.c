#include "main.h"
/**
* _isdigit - Checks number from 0-9
* @x: The number to be iterated over
* Return: 1 for range 0-9 & 0 for diff range
*/
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
