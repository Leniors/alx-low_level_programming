#include "main.h"

/**
 * print_alphabet_x10 - prints lowwercase letters 10 times.
 *
 * returns nothing
 */
void print_alphabet_x10(void)
{
	int j;
	int i = 10;
	while (i <= 122)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
