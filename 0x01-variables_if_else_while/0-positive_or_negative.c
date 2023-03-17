#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n < 0)
	{
		printf("%d is negative");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	return (0);
}
