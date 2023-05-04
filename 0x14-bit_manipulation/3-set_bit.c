#include "main.h"

/**
 * set_bit - setes a bit
 * @n: pointer
 * @index: index
 * Return: returns
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
