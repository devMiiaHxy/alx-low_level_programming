#include "main.h"

/*reverse_array - function tat reverses the values of an number array
 *@x: pointer
 *@y: number of array elements
 *
 *Return: void
 */
void reverse_array(int *x, int y)
{
	int temp, count;

	y = y - 1;
	count= 0;
	while (count <= y)
	{
		temp = x[count];
		x[count++] = x[y];
		x[y--] = temp;
	}
}
