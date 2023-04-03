#include "main.h"

/**
 * _memcpy - copies char from a string to another
 * @dest: string1
 * @src: string
 * @n: integer
 * Return: returns string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
