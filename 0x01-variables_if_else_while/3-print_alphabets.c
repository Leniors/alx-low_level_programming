#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper_case = 97;
	char lowwer_case = 65;

	while (upper_case <= 122)
	{
		putchar(upper_case);
		upper_case++;
	}
	while (lowwer_case <= 90)
	{
		putchar(lowwer_case);
		lowwer_case++;
	}
	putchar('\n');
	return (0);
}
