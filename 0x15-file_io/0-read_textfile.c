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

	fd = open(filename, O_RDONLY);
	if (fd == -1 || *filename == NULL)
		return 0;
	sizeread = read(fd, STDOUT_FILENO);
	close(fd);
	return (sizeread);
}
