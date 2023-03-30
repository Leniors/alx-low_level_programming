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

	i = 0;
	while (s[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == '.' || str[i - 1] == ';' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || i == 0)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
