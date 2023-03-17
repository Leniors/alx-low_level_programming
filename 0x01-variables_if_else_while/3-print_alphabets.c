#include <stdio.h>
* betty style doc for function main goes there */
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
		putchar("%c", upper_case);
		upper_case++;
	}
	printf("\n");
	while (lowwer_case <= 'Z')
	{
		putchar("%c", lowwer_case);
		lowwer_case++;
	}
	printf("\n");
	return (0);
}
