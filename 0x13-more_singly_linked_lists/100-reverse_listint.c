include "lists.h"

/**
  * reverse_listint - a function that reverses
  *a listint_t linked list
  *
  * @head: pointer to head of the list
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);

	former = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (former);
}
