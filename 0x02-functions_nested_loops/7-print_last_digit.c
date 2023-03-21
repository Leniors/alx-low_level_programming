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
	int j;

	j = i % 10;
	if (j > 0)
	{
		return(j);
	}
	else if (j < 0)
	{
		return (-j);
	}
	_putchar('\n');
}
