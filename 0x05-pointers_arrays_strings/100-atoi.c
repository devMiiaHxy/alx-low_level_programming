#include "main.h"

/**
 * _atoi - turns string to an integer
 * @s: string to be changed
 *
 * Return the int changed from the string
 */

int _atoi(char *s)
{
	int x,d,n,len,f,digit;

	x = 0;
	d = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++d;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
					break;
				f = 0;
		}
		x++;

	}

	if (f == 0)
		return(0);

	return(n);

}

