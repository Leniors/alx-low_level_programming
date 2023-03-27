#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string variable
 */
void print_rev(char *s)
{
	int i, len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s++;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
		s++;
	}
	_putchar('\n');
}
