#include "main.h"

/*
 *_strcat - Function to append both variables
 *@dest: Variable for the first string
 *@src: Variable for second string
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int string_length, x;

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (x = 0; src[x] != '\0'; x++, string_length++)
{
dest[string_length] = src[x];
}
dest[string_length] = '\0';
return (dest);
}
