#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
