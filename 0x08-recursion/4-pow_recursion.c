#include "main.h"

/**
 * _pow_recursion - returns power of x to y
 * @x: integer
 * @y: integer
 * Return: returns integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x ** y);
}
