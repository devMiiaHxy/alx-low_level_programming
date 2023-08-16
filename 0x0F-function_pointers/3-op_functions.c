#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Returns the sum of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: x + y
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: x - y
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - Returns the product of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: x * y
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - Returns the division of two numbers.
 * @x: first number.
 * @y: The second number.
 *
 * Return: x / y.
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: The remainder of x / y.
 */
int op_mod(int x, int y)
{
	return (x % y);
}
