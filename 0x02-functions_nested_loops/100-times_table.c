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
			if (k == 0)
			{
				_putchar(48);
			}
			if (k > 0 && k <= 9)
			{
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + k);
			}
			else if (k > 9 && k < 100)
			{
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
			}
			else if (k >= 100)
			{
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(48 + k / 100);
				_putchar(48 + (k % 100) / 10);
				_putchar(48 + k % 10);
			}
		}
		_putchar('\n');
	}
}
