#include <stdio.h>
#include <stdlib.h>

/**
 * main - mainfunction
 * @argc: count
 * @argv: v
 * Return: always 0 succes
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
