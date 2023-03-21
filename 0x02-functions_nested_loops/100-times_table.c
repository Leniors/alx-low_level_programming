#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; j++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar('0');
				else
					_putchar(' ');
				k = i * j;

				if (k < 10)
					_putchar(' ');
				else if (k < 100)
					_putchar(k / 10 + '0');
				else
					_putchar(k / 100 + '0');

				if (j == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
