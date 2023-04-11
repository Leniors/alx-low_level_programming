#include <stdlib.h>

/**
 * *str_concat - concatinates strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;
	int len1;
	int len2;

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
	p = malloc((len1 + len2 + 1) * sizeof(char));
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
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
