#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - mainfunction
 * @argc: count
 * @argv: v
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
