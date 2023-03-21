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

	if (j < 0)
	{
		j = -j;
	}
	_putchar(j);
}
