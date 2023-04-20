#include "variadic_functions.h"
#include "stdagr.h"

/**
 * sum_them_all - sums
 * @n: numer
 * @...: varables
 * Return: 0 is success
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
