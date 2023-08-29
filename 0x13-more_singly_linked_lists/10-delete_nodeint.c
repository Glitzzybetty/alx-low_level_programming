#include "lists.h"

/**
  * delete_nodeint_at_index - a funtion that deletes the node
  * at index of a linked list
  *
  * @head: head pointer 
  * @index: the index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *former;
	listint_t *next;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	next = (*head)->next;
	former = *head;
	if (index == 0)
	{
		free(former);
		*head = next;
		return (1);
	}
	if (next)
		next = next->next;
	for (i = 1; i < index && next; i++)
	{
		former = former->next;
		next = next->next;
	}

	if (i == index)
	{
		free(former->next);
		former->next = next;
		return (1);
	}
	return (-1);
}
