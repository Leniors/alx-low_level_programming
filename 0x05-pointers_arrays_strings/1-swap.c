#include "main.h"

/**
 * swap_int - swaps numbers
 * @a:first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
