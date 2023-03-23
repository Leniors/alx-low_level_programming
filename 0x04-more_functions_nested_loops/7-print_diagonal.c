#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: variable used
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');
}
