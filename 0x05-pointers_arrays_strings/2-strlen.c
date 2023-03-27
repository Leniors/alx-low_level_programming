#include <string.h>
#include "main.h"

/**
 * _strlen - return length of string
 * @s: char
 * Return: retuns length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
