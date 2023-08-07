#include <stdio.h>
#include "main.h"

/**
 * main - main funnction
 * Return: zero on success
 */
int main(int argc, char **argv)
{
	int from;
	int to;
	int c1;
	int c2;
	ssize_t red;
	ssize_t w;
	char buffer[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_toi\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	red = read(from, buffer, 1024);
	if (from == -1 || red == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	w = write (to, buffer, red);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c1 = close(from);
	if (c1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
		exit(100);
	}
	c2 = close(to);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
		exit(100);
	}
	return (0);
}
