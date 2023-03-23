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
		for (i = 0; i <= 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(48 + i % 10);
		}
	}
	_putchar('\n');
}
