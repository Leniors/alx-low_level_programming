#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * @argc: number of arguments
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*address)(int, char **) = main;
	unsigned char arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		arr = *(unsigned char *)address;
		printf("%.2x", arr);
		if (i == bytes - 1)
		{
			continue;
		}
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
