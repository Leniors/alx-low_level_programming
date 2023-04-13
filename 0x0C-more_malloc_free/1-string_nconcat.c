#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatinates strings
 * @s1: string
 * @s2: string @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(char) * n);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j <= n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	return (p);
}
