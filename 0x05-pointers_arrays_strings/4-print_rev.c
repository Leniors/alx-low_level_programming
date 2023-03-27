#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string variable
 */
void print_rev(char *s)
{
	int i, len;

	while (*s != '0')
	{
		len++;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
