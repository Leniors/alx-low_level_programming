#include "main.h"

/**
 * _strstr - returns sub string
 * @haystack: string
 * @needle: sub string
 * Return: returns sub string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	return (0);
}
