#include "main.h"

/**
 * read_textfile - function
 * @filename: file name
 * @letters: number of letters to read
 * @Return: returns size
 */
ssize read_textfile(const char *fileame, size_t letters)
{
	int fd;
	ssize_t sizeread[letters];

	fd = open(filename, O_RDONLY);
	if (fd == -1 || *filename == NULL)
		return 0;
	read(fd, sizeread, STDOUT_FILENO);
	close(fd);
}
