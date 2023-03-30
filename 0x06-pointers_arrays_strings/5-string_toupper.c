#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes a string to uppercase
 * @s: string
 * Return: retuns a string
 */
char *string_toupper(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i)
	{
		s[j] = toupper(s[j]);
		j++;
	}
	return (s);
}
