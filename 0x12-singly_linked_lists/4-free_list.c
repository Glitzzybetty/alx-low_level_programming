#include "lists.h"

/**
 * free_list - a function that release the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
{
	next_node = head->next;
	free(next_node->str);
	free(head);
	head = next_node;
}
}
