#include <stdio.h>
#include <stdlib.h>

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
				printf("Error");
				return (1);
			}
			i++;
		}
		printf("%d", sum);
	}
	return (0);
}
