#include "lists.h"

/**
 * free_list - a function that release the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
{
	list_t *next_node = current_node;

	next_node = next_node->next;

	free(next_node->str);
	free(next_node);
}
}
