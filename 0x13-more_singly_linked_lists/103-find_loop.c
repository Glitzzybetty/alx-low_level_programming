#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer at the start
 *
 * Return: the address of the node where the
 * loop starts or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hot, *cold;

	hot = cold = head;
	while (hot && cold && cold->next)
	{
		hot = hot->next;
		cold = cold->next->next;
		if (hot == cold)
		{
			hot = head;
			break;
		}
	}
	if (!hot || !cold || !cold->next)
		return (NULL);
	while (hot != cold)
	{
		hot = hot->next;
		cold = cold->next;
	}
	return (cold);
}
