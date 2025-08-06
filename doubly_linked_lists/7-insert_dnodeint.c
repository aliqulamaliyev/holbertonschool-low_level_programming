#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts new node at given position in the list
 * @h: Double pointer to the head of the dlistint_t list
 * @idx: Index where the new node should be inserted (starting at 0)
 * @n: The data value to store in the new node
 *
 * Return: Address of new node or NULL if it failed or index is out of range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
