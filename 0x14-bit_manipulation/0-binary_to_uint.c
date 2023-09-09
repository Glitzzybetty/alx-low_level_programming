#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int vl = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		vl <<= 1;
		if (*(b + n) == '1')
			vl ^= 1;
		n++;
	}
	return (vl);
}
