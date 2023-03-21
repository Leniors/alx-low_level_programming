#include "main.h"

/**
 * _isalpha - prints a character that is not a letter.
 *
 * @c : is an ASCII character.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
