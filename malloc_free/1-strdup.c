#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the original string to duplicate
 *
 * Return: pointer to the duplicated string, if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
