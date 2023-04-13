#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory
 * @nmemb: int
 * @size: int
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	ptr = p;
	for (i = 0; i < nmeb * size; i++)
	{
		**ptr[i] = 0;
	}
	return (p);
}
