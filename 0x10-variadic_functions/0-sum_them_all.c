#include "variadic_functions.h"
#include "stdagr.h"

/**
 * sum_them_all - sums
 * @n: numer
 * @...: varables
 * Return: 0 is success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
