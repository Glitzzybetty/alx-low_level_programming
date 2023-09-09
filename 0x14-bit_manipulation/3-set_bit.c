#include "main.h"

/**
 * get_bit - sets the value of a bit to 1 at a given
 * index
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: 1 if it works or -1 if not
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
