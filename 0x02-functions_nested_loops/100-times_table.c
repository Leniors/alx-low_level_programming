#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int k;

			k = i * j;
			if (k < 10)
			{
				_putchar(48 + k);
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(48 + product / 100);
				_putchar(48 + (product % 100) / 10);
				_putchar(48 + product % 10);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
