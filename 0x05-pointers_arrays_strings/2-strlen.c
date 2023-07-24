#include "main.h"

/**
 * _strlen - checks how long string is
 * @s: string variable to be iterated
 *  Return: The length of the string
 */

int _strlen(char *s)
{
int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);
}
