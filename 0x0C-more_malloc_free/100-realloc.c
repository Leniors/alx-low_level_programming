#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: returns array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_size > old_size)
	{
		min_size = old_size;
	}
	if (old_size > new_size)
	{
		min_size = new_size;
	}
	for (i = 0; i < min_size; i++)
	{
		new_ptr[i] = ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
