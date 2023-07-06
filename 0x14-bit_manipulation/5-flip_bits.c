#include "main.h"

/**
 * flip_bits - function
 * @n: int
 * @m: int
 * Return: returns
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ = n ^ m;
	unsigned int count = 0;

	while (differ != 0)
	{
		count += differ & 1;
		differ >>= 1;
	}
	return (count);
}
