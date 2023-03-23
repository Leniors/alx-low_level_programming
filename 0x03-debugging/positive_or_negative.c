#include "main.h"
/**
 * positive_or_negative - function used to check state of a number.
 *
 * @i: integer being checked.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
