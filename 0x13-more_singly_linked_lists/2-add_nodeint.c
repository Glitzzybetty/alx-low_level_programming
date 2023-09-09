#include "lists.h"

/**
  * add_nodeint - a function that adds a node to beginning of list
  *
  * @head: pointer to the first element of list
  * @n: value to initiate a node
  * Return: address of a element of NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a_node;

	a_node = malloc(sizeof(listint_t));
	if (!a_node)
		return (NULL);
	a_node->n = n;
	a_node->next = NULL;

	if (!head)
		return (NULL);

	if (head)
		a_node->next = *head;
	*head = a_node;
	return (a_node);
}
