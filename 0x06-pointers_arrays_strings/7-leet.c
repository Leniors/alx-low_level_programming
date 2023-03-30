#include "main.h"

/**
 * leet - replaces char
 * @s: string
 * Return: returns string
 */
char *leet(char *s)
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
		if (s[j] == 'a' || s[j] == 'A')
		{
			s[j] = '4';
		}
		else if (s[j] == 'e' || s[j] == 'E')
		{
			s[j] = '3';
		}
		else if (s[j] == 'o' || s[j] == 'O')
		{
			s[j] = '0';
		}
		else if (s[j] == 't' || s[j] == 'T')
		{
			s[j] = '7';
		}
		else if (s[j] == 'l' || s[j] == 'L')
		{
			s[j] = '1';
		}

		j++;
	}
	return (s);
}
