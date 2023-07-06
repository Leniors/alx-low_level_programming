#include "main.h"

/**
 * set_bit - function
 * @n: integer
 * @index: index
 * Return: returns intger
 */
int set_bit(unsigned long int *n,unsiged int index)
{
	unsigned long int mask = 1 << index;

	if (n == NULL)
		return (-1);
	else
		*n = *n | mask;
	return (1);
}
