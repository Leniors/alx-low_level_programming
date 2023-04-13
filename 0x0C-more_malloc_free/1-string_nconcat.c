#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatinates strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}

	p = malloc((len1 + n + 1) * sizeof(char));
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
	p[len1 + n] = '\0';
	return (p);
}
