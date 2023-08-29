#include "lists.h"

void beforemain(void) __attribute__ ((constructor));

/**
 * beforemain - prints a string before
 * the main function is executed
 */

void beforemain(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
