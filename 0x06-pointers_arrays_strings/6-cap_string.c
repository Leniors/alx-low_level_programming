#include "main.h"
#include <ctype.h>

/**
 * cap_string - changes string to uppercase
 * @s: string
 * Return: returns a string
 */
char *cap_string(char *s)
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
		if (s[j] == ' ' || s[j] == '.' || s[j] == '\n' || s[j] == ',' || s[j] == '!' || s[j] == '\t' || s[j] == ';' || s[j] == '?' || s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
		{
			s[j + 1] = toupper(s[j + 1]);
		}
		j++;
	}
	return (s);
}
