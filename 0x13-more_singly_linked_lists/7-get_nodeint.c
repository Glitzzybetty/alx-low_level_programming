#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns the nth
  * node of a listint_t linked list
  *
  * @head: pointer to list head
  * @index: the index of the node starting at 0
  * Return:  nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (i == index)
		return (head);
	return (NULL);
}
