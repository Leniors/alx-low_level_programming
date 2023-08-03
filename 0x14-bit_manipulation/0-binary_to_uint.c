#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int decimal = 0;
	unsigned int currentValue = 1;

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		len++;
	}

	while (len >= 0)
	{
		if (b[len - 1] == '1')
		{
			decimal += currentValue;
		}
		currentValue *= 2;
		len--;
	}
	return (decimal);
}
