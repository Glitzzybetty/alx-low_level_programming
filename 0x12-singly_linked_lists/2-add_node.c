#include "lists.h"

/**
 * add_node - a function that add a new node
 * at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
	return (NULL);
}
new_node->str = strdup(str);
new_node->next = NULL;

if  (new_node->str == NULL)
{
	free(new_node);
	return (NULL);
}

if (head)
{
	new_node->next = *head;
}
*head = new_node;
return (new_node);
}
