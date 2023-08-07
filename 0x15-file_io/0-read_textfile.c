#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: letters
 * Return: number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t written;
	ssize_t readen;
	char *buffer = malloc(letters * sizeof(char));

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	readen = read(fd, buffer, letters);
	if (readen == -1)
	{
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, readen);
	if (written == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (written);
}
