#include "main.h"

/**
 * get_bit - returns
 * @n: number
 * @index: index
 * Return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (indx > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
