#include "main.h"

/**
 * swap_int - swaps numbers
 * @a:first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int *p;
	int *pp;

	p = &a;
	pp = &b;
	a = p;
	b = pp;
}
