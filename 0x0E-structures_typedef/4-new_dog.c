#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - value for string length delivered
 * @a: string value to iterate
 * Return: value for how long string is
 */
int _strlen(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - string copied, even  special characters
 * @dest: buffer to string
 * @src: duplicated string
 *
 * Return: return pointer value
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - dog obj created
 * @name: dog name value
 * @age: dog age value
 * @owner: value for who controls the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
