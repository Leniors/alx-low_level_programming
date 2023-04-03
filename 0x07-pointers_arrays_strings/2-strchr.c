#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * @p: string
 * Return: returns string
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		j++;
	}
	return (0);
}
