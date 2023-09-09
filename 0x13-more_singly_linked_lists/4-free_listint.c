#include "lists.h"

/**
  * free_listint - a function that frees a list
  *
  * @head: pointer to the head of list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *empt;

	if (!head)
		return;
	while (head->next)
	{
		empt = head->next;
		free(head);
		head = empt;
	}
	free(head);
}
