#include "main.h"
/**
 *_strcamp - compares two distinct values
 *@x: pointer to the first value
 *@y: pointer to the second value
 *Return: result is smaller than zero if string is less than the other and bigger than zero if strins are equal
 */

int _strcmp(char *x, char *y)
{
	int counter, value_check;

	counter = 0;
	while(x[counter] == y[counter] && x[counter] != '\0')
	{
		counter++;
	}
	value_check = x[counter] - y[counter];
	return (value_check);
}
