#include "main.h"

/**
 * swap_int - take in two variable numbers and change their values
 * @a: swaps and stores address of b
 * @b: swaps then stores the address of a
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
int change = *b;
*b = *a;
*a = change;
}
