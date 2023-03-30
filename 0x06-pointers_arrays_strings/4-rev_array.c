#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
