#include <stdlib.h>

/**
 * **alloc_grid - creates a 2D array
 * @width: width
 * @height: height
 * Return: returns int
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = calloc(width, sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
