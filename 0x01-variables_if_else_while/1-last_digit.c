#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_num = n % 10;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	if (n  == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n, last_num);
	}
	return (0);
}
