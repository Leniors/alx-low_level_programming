#include "main.h"

/**
 * jack_bauer - prints clock hours.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a, b;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(58);
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++
		}
	}
}
