#include "main.h"

/**
 * print_line - prints a line n times
 * @n: number used
 *
 * Return: alwys 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
