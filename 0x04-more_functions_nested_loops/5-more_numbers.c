#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int k = 0;

	while (k < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(i % 10 + 48);
		}
		k++;
	}
	_putchar('\n');
}
