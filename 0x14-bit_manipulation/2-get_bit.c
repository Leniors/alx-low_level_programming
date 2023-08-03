#include "main.h"

/**
 * get_bit - gets a bit
 * @n: int
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	int mask = 1;

	i = (n >> index);
	return (i & mask);
}
