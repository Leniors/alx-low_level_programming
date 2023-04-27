#include <stdio.h>

void first(void)__attribute__ ((constructor));

/**
 * first - prints
 * function executes
 */
void first(void)
{
	printf("You're! and yet, you must allow,\n");
	printf(" bore my house upon my back!\n");
}
