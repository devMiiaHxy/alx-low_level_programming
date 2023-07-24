#include "main.h"
#include "main.h"

/**
 * rev_strin - outputs the reverse of a string
 * @s: pointer that points to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, z,half;
	char key;

	for (length = 0; s[length] != '\0'; length++);
	z = 0;
	half = length / 2;

	while (half--)
	{
		key = s[length -z -1];
		s[length - z - 1] = s[z];
		s[z] = key;
		z++;
	}
}
