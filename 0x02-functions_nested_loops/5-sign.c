#include "main.h"

/**
 * print_sign - prints the sign of the n value.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
}
