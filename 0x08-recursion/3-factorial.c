#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: number
 * Return: returns integer
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n -1));
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
}
