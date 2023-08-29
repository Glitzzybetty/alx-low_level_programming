#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a new node
  * at a given position
  *
  * @head: double pointer to the head
  * @idx: is the index of the list where the new node should be added
  * @n: vlue for inserts
  * Return: address of new node or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *next;
	listint_t *prev;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	next = *head;

	for (i = 0; i < idx && next; i++)
	{
		prev = next;
		next = next->next;
	}

	if (i == idx)
	{
		new_node->n = n;
		new_node->next = next;
		if (i != 0)
			prev->next = new_node;
		else
			*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
