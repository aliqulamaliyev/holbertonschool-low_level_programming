#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name, len_owner;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	d->name = malloc(len_name + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(len_owner + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
