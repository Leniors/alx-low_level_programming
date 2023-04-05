#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of n
 * @n: number
 * Return: returns integer
 */
int _sqrt_recursion(int n)
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
	return (_sqrt_recursion(n));
}
