#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string variable
 */
void print_rev(char *s)
{
	while (*s == '\n')
	{
		_putchar(*s--);
	}
}
