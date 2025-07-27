#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
