#include "main.h"
/**
 * leet - function that can turn a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer
 *
 * Return: s pointer
 */

char *leet(char *s)
{
	int length, countLeet;
	char leetAlphabets[] = "oOtTlLaAeE";
	char numsOfLeets[] = "0077114433";

	length = 0;
	while (s[length] != '\0')
	{
		countLeet = 0;
		while (countLeet < 10)
		{
			if (leetAlphabets[countLeet] == s[length])
			{
				s[length] = numsOfLeets[countLeet];
			}
		countLeet++;
		}
	length++;
}
return (s);
}
