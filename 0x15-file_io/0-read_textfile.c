#include "main.h"

/**
 * read_textfile - function
 * @filename: file name
 * @letters: number of letters to read
 * @Return: returns size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sizeread;
	char buffer[letters + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1 || *filename == NULL)
	{
		close(fd);
		return (0);
	}
	sizeread = read(fd, buffer, letters);
	close(fd);
	return (sizeread);
}
