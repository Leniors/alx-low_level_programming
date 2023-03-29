#include "main.h"

/**
 * _strncpy - replace a string
 * @dest: first string
 * @src: second string
 * @n: variable
 * Return: retuns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
