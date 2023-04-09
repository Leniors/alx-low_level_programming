#include <stdio.h>

/**
 * main - main function
 * @argc: count
 * @argv: v
 * Return: always 0 successs
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
