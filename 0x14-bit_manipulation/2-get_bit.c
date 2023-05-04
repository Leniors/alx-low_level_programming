#include "main.h"

/**
 * get_bit - returns the vlue of  bit
 * @n: number
 * @index: index
 * Return: returns
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
