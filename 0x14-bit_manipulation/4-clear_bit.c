#include "main.h"

/**
 * clear_bit - function
 * @n: integer
 * @index: index
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	*n = *n ^ mask;
	return (1);
}
