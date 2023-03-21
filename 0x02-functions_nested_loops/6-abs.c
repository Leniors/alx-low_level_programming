#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @i : is the integer being checked.
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
