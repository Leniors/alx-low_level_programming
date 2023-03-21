#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
