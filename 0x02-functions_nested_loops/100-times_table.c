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
				k = i * j;
				if (j < n)
				{
					_putchar(k);
					_putchar(',');
					_putchar(' ');
				}
				else if (j == n)
				{
					_putchar(48 + k);
				}
			}
			_putchar('\n');
		}
	}
}
