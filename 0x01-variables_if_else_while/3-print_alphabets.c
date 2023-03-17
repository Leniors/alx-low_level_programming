#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper_case = 'a';
	char lowwer_case = 'A';

	while (upper_case <= 'z')
	{
		printf("%c", upper_case);
		upper_case++;
	}
	while (lowwer_case <= 'Z')
	{
		printf("%c", lowwer_case);
		lowwer_case++;
	}
	printf("\n");
	return (0);
}
