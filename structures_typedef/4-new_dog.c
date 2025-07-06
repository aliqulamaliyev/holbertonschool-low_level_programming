#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "dog.h"

/**
 * _strdup - duplicates a string using malloc
 * @str: the string to duplicate
 * Return: pointer to duplicated string or NULL if failed
 */
char *_strdup(char *str)
{
	char *copy;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
