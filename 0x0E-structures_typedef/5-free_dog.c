#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - memory released for dog struct object initialized
 * @d: struct of dog memory to free
 */
void free_dog(dog_t *x)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
