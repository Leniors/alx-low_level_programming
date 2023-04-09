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

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2];
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
