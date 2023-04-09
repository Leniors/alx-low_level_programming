#include <stdio.h>
#include <stdlib.h>

/**
 * @argc: count
 * @argv: v
 * Return: always success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	int i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	int num = 0;

	num += i / 25;
	i %= 25;

	num += i / 10;
	i %= 10;

	num += i / 5;
	i %= 5;

	num += i / 2;
	i %= 2;

	num += i;

	printf("%d\n", num);
	return (0);
}
