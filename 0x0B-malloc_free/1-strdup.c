#include <stdlib.h>

/**
 * *_strdup - returns string
 * @str: string
 * Return: returns string
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int j;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	
	p = malloc((i + 1) * sizeof(char));

	for (j = 0; j < i; j++)
	{
		p[i] == str[i];
	}
	return (p);
}
