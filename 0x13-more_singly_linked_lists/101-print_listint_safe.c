#include "lists.h"

/**
  * print_listint_safe - a function that prints a listint_t linked list
  *
  * @head: pointer to head of list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, i = 0;
	const listint_t *loop;
	const listint_t *h;

	h = head;
	loop = head;
	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == head->next)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			n++;
			break;
		}
		head = head->next;
		while (i < n && loop)
		{
			if (head == loop)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				if (head != head->next)
					n++;
				return (n);
			}
			loop = loop->next;
			i++;
		}
		loop = h;
		i = 0;
		n++;
	}
	return (n);
}
