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
	const list_t *place = h;
	size_t count = 0;

	while (place != NULL)
	{
		if (place->str != NULL)
		{
			printf("[%zu] %s\n", strlen(place->str), place->str);
		}
		else
		{
		printf("[0](nil)\n");
		}
		count += 1;
		place = place->next;
	}
	return (count);
}
