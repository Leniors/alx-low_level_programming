#include "main.h"

/**
 * _strpbrk - cuts string
 * @s: string
 * @accept: substring
 * Return: returns substring
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
