#include "main.h"

/**
 * get_bit - function
 * @n: integer
 * @index: index
 * Return: returns int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}
