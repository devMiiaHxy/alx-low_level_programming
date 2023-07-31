#include "main.h"
/**
 * _strchr - Entry point of program
 * @x: input variable
 * @y: input variable
 * Return: Always 0
 */
char *_strchr(char *x, char y)
{
	int i = 0;
	 for (; x[i] >= '\0'; i++)
	 {
		 if (x[i] == y)
			 return (&x[i]);
	 }
	 return (0);
}
