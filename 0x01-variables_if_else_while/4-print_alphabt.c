#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}
		printf("%c", letter);
		letter++;
	}
	printf("\n");
	return (0);
}
