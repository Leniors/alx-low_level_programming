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
	int i;
	int j;
	int mul;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
