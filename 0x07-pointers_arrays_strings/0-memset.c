#include "main.h"

/**
 * _memset - sets memory to a constant byte
 * @s: string
 * @b: character
 * @n: integer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
