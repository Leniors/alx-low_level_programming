#include <stdio.h>

/**
 * main - mainfunction
 * @argc: count
 * @argv: v
 * Return: always 0 succes
 */
int main(int argc, char *argv[])
{
	int mul;
	int sum = 0;

	if (argc > 1)
	{
		mul = (argv[1]) * (argv[2]);
		sum += mul;
		printf("%d", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
