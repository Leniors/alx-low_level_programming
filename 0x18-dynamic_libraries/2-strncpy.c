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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
