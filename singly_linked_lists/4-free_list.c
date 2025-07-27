#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list of type list_t
 * @head: pointer to the head of the list to be freed
 *
 * Description: This function frees all the nodes of a linked list,
 *              including the strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
