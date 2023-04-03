#include "main.h"

/**
 * _strspn - returns sub string length
 * @s: string
 * @accept: substring
 * @m: string being returned
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int l;
	unsigned int m = 0;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (accept[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= k; i++)
	{
		for (j = 0; j <= l; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (accept[j] != s[i])
		{
			m++;
		}
	}
	return (m);
}
