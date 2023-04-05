#include "main.h"

/**
 * _sqrt_recurtion - returns sqrt of n
 * @n: number
 * Return: returns integer
 */
int _sqrt_recurtion(int n)
{
	int i;

	i = 0;
	if (i < n)
	{
		if ((i * i) != n)
		{
			i++;
		}
		else if ((i * i) == n)
		{
			return (i);
		}
	}
	return (_sqrt_recurtion(n));
}
