#include "main.h"
/**
 *@s: pointer
 *
 *Return: pointer to s
 */
char *cap_string(char *s)
{
int string_counter;

string_counter = 0;
while (s[string_counter] != '\0')
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[string_counter] == ' ' || s[string_counter] == '\t' || s[string_counter] == '\n' || 
s[string_counter] == ',' || s[string_counter] == ';' || s[string_counter] == '.' || s[string_counter] == '!' || s[string_counter] == '?' || 
s[string_counter] == '"' || s[string_counter] == '(' || s[string_counter] == ')' || 
s[string_counter] == '{' || s[string_counter] == '}')
{
if (s[string_counter = + 1] >= 97 && s[string_counter + 1] <= 122)
{
s[string_counter + 1] = s[string_counter + 1] - 32;
}
}
string_counter++;
}
return (s);
}
			
