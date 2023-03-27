#include <string.h>
#include "main.h"

/**
 * _strlen
 * @s: char
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
