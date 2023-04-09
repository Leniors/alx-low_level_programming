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
			if (!isdigit(argv[i]))
			{
				printf("Error");
				return (1);
			}
			else if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
