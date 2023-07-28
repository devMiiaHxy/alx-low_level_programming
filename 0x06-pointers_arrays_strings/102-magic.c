#include <stdio.h>

/**
 * main - entry point of every program
 * @g: pointer variable
 * @x: variable
 * Return: Always 0
 */

int main(void)
{
int x;
int a[5];
int *g;

a[2] = 1024;
g = &x;

*(g + 5) = 98;
printf(*a[2] = %d\n", a[2]);
return (0);

}
