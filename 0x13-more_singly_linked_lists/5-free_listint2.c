#include "lists.h"

/**
 * free_listint2 - a function that frees a list pt2
 * @head: a double pointer to the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
