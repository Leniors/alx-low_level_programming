#include "main.h"
#include <unistd.h>

/**
 * read_textfile - function
 * @filename: filename
 * @letters: num of letters
 * Return: returns size
 */
ssize_t read_textfile(const char *filename, size letters)
{
	int fd;
	ssize_t sizeread;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters + 1));
	fd = open(filename, O_RDONLY);
	sizeread = read(fd, filename, letters);
	write(fd, STDOUT_FILENO, letters);

	return (sizeread);
}
