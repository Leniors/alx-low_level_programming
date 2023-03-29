#include "main.h"

/**
 * _strncat - concatinates string
 * @dest: first string
 * @src: second string
 * @n: amt of byte
 * Return: retuns concatineted string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
