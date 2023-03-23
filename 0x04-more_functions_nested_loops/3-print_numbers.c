#include "main.h"

/**
 * print_numbers - prints the numbers followed by a line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
