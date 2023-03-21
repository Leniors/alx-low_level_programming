#include "main.h"

/**
 * _islower - retuns 1 if c is lowercase or 0 if uppercase
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
