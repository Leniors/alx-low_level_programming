#include "main.h"

/**
 * print_number - prints a num
 *
 * @n: integer printed
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
