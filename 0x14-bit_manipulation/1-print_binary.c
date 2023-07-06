#include "main.h"

/**
 * print_binary - function
 * n: unsigned int
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1;

	if (n > 1)
		print_binary(n >> 1);
	_putchar(n & mask ? '1' : '0');
}
