#include "lists.h"

/**
 * assign - reassigns memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **assign(listint_t **list, size_t size, listint_t *new)
{
	listint_t **anew;
	size_t i;

	anew = malloc(size * sizeof(listint_t *));
	if (anew == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		anew[i] = list[i];
	anew[i] = new;
	free(list);
	return (anew);
}

/**
 * free_listint_safe - a function that frees a listint_t linked list
 * @head: double pointer to the start 
 *
 * Return: tthe size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = assign(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
