#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file
 * @filename: file being read
 * @letters: number of letters
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O-RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
