#include "lists.h"

/**
  * add_nodeint_end - a function that adds a node at end of list
  *
  * @head: pointer to first node of list
  * @n: int to add new node to list end
  * Return: address of a element or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a_node;
	listint_t *copy;

	a_node = malloc(sizeof(listint_t));
	if (!a_node)
		return (NULL);
	a_node->n = n;
	a_node->next = NULL;

	if (!head)
		return (NULL);

	if (*head)
	{
		copy = *head;
		while (copy->next)
		{
			copy = copy->next;
		}
		copy->next = a_node;
	}
	else
	{
		*head = a_node;
	}

	return (a_node);
}
