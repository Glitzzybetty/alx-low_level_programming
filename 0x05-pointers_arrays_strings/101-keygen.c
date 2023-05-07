#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
int p = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		p = rand() % 128;
		if ((c + p) > 2772)
			break;
		c = c + p;
		printf("%c", p);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
