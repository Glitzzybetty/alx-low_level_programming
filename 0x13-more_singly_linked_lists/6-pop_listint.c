#include "lists.h"

/**
  * pop_listint - a function that deletes the
  * head of list and returns head's data
  *
  * @head: double pointeer to head
  * Return: head's data
  */
int pop_listint(listint_t **head)
{
	listint_t *empt;
	int n;

	if (!head || !(*head))
		return (0);
	empt = *head;
	n = (*head)->n;
	if (empt->next)
		*head = empt->next;
	else
		*head = NULL;
	free(empt);
	return (n);
}
