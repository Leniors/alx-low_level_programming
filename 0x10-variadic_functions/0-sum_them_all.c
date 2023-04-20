#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - sums
 * @n: numer
 * @...: varables
 * Return: always 0 is success
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (0);
}
