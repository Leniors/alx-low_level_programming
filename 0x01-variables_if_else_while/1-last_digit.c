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
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	/* your code goes there */
	if (last_num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (last_num < 6 && last_num != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else if (last_num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	return (0);
}
