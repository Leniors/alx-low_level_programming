#include "main.h"

/**
 * _strcat - concatinates strings
 * @dest: first string
 * @src: second string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		_putchar(src[j]);
		j++;
	}
	_putchar('\n')
}
