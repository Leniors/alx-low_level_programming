#include "main.h"

/**
 * binary_to_uint - function
 * @b: string
 * Return: returns uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int decimal = 0;
	unsigned int i;
	unsigned int power;
	unsigned int j;

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			power = len - 1 - i;
			j = 1;
			while (power > 0)
			{
				j *= 2;
				power--;
			}
			decimal += j;
		}
	}
	return (decimal);
}
