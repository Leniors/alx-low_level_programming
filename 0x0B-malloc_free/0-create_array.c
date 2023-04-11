#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: size of array
 * @c: char
 * Return: a char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(unsigned int));

	for(i = 0; i <size; i++)
	{
		p[i] = c;
	}
	return (p);
}
