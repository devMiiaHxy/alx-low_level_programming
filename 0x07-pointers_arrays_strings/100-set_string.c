#include "main.h"

/**
 * set_string - sets pointer to char
 * @x: pointer pointing to pointer
 * @towards: variable of pointer char
 */
void set_string(char **x, char *towards)
{
	*x = towards;
}
