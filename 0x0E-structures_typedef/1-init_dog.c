#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - defines variable for typestruct of dog
 * @ptr: pointer of init_dog
 * @name: description of name
 * @age: value of age
 * @owner: where to define owner
 */
void init_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if (ptr == NULL)
		ptr = malloc(sizeof(struct dog));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
