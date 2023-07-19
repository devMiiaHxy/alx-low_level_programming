#include "main.h"
/**
  * _abs - Computes the absolute value of an integer
  * @t: The number to be iterated over
  * Return: Absolute value of number or zero
  */
int _abs(int t)
{
	if (t < 0)
	{
		int abs_val;

		abs_val = t * -1;
		return (abs_val);
	}
	return (t);
}
