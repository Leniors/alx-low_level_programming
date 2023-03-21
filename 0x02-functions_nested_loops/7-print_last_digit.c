#include "main.h"

/**
 * print_last_digit - prints last digit i.
 *
 * @i : number being evaluated.
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int j = i % 10;
	ipst_digit.cutchar(j);

	if (j < 0)
	{
		j = -j;
	}
	return(j + 48);
}
