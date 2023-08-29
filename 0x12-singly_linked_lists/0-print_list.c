#include "lists.h"

/**
 * print_list - print all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: size_t the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
		printf("[0](nil)\n");
		}
		count += 1;
		h = h->next;
	}
	return (count);
}
