#include "main.h"

/**
 * get_bit - function
 * n: integer
 * index: index
 * Return: returns int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	int i;
	
	i = n & mask;
	return (i);
}
