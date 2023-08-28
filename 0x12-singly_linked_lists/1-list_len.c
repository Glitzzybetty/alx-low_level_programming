#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *  in a linked list
 * @h: pointer to the list
 * Return: size_t the number of nodes.
 */

size_t list_len(const list_t *h)
{
	const list_t *place = h;
	size_t count = 0;

    while (place != NULL) {
        place = place->next;
        count++;
    }

    return (count);
}
