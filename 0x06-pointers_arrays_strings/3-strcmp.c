#include "main.h"

/**
 * strcmp - comparess two strings
 * @s1: first string
 * @s2: second string
 * Return: retuns a value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
			break;
		}
		else if (s1[i] > s2[i])
		{
			return (15);
			break;
		}
	}
	return (0);
}
