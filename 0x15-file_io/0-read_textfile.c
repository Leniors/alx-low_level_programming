#include "main.h"

/**
 * read_textfilr - function
 * @filename: filename
 * @letters: number of bytes
 * Return: returns
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t _read;
	ssize_t written;

	buffer = malloc((letters + 1) * sizeof(char));
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		close(fd);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, letters);
	if (writtn == -1)
	{
		close(fd);
		return (0);
	}

	return (_read);
}
